inventory = [ 
{ 
"Device Name": "Printer \"OfficeJet\"", 
"Device Type": "Printer", 
"Serial Number": "PRT-789", 
"Manufacturer": "HP", 
"Purchase Date": "2021-11-20" 
} 
]

def to_csv_string(inventory: list[dict], sort_by: str = None) -> str: 
    if not inventory: 
        return ""  
    # Sort if sort_by is provided 
    if sort_by: 
        inventory = sorted(inventory, key=lambda x: (x.get(sort_by) is None, x.get(sort_by)))
    # Fixed header order 
    headers = ["Device Name", "Device Type", "Serial Number", "Manufacturer", "Purchase Date"] 
    header_line = ",".join(headers)  
    rows = [] 
    for item in inventory: 
        row_fields = [] 
        for key in headers: 
            # Get value, convert to string, handle None 
            val = item.get(key, "") 
            if val is None: 
                val = "" 
            else: 
                val = str(val)  
            # Check if quoting is needed (includes newline check) 
            if any(ch in val for ch in ',"\n'): 
                # Escape double quotes by doubling them 
                escaped = val.replace('"', '""') 
                val = f'"{escaped}"' 
            row_fields.append(val) 
        rows.append(",".join(row_fields))  
    # Combine header and rows with newlines 
    return "\n".join([header_line] + rows)  

if __name__ == "__main__": 
    def run_test(test_id, inventory, expected, sort_by=None): 
        result = to_csv_string(inventory, sort_by) if sort_by is not None else to_csv_string(inventory) 
        status = "PASS" if result == expected else "FAIL" 
        print(f"Test {test_id}: {status}") 
        if status == "FAIL": 
            print(f"  Expected: {repr(expected)}") 
            print(f"  Got     : {repr(result)}") 
        return status == "PASS" 
        # Original test cases (IDs 1-6) — these must still pass 
    tests = [ 
        (1, [], ""), 
        (2, [{"Device Name": "A", "Device Type": "B", "Serial Number": "C", "Manufacturer": "D", "Purchase Date": "E"}], 
        "Device Name,Device Type,Serial Number,Manufacturer,Purchase Date\nA,B,C,D,E"), 
        (3, [{"Device Name": "X,Y", "Device Type": "Z", "Serial Number": "123", "Manufacturer": "Dell", "Purchase Date": "2020-01-01"}], 
        'Device Name,Device Type,Serial Number,Manufacturer,Purchase Date\n"X,Y",Z,123,Dell,2020-01-01'), 
        (4, [{"Device Name": 'Quote"Here', "Device Type": "T", "Serial Number": "123", "Manufacturer": "M", "Purchase Date": "2020-01-01"}], 
        'Device Name,Device Type,Serial Number,Manufacturer,Purchase Date\n"Quote""Here",T,123,M,2020-01-01'), 
        (5, [{"Device Name": "New\nLine", "Device Type": "T", "Serial Number": "123", "Manufacturer": "M", "Purchase Date": "2020-01-01"}], 
        "Device Name,Device Type,Serial Number,Manufacturer,Purchase Date\n\"New\nLine\",T,123,M,2020-01-01"), 
        (6, [{"Device Name": "A", "Device Type": "B,C", "Serial Number": "D", "Manufacturer": "E", "Purchase Date": "F"}, 
        {"Device Name": "G", "Device Type": "H", "Serial Number": "I,J", "Manufacturer": "K", "Purchase Date": "L"}], 
        "Device Name,Device Type,Serial Number,Manufacturer,Purchase Date\nA,\"B,C\",D,E,F\nG,H,\"I,J\",K,L"), 
        ]
        # New test cases for sorting (IDs 7-8) 
        # Test 7: sort by Device Name 
    inv7 = [ 
        {"Device Name": "Zebra", "Device Type": "A", "Serial Number": "1", "Manufacturer": "X", "Purchase Date": "2020-01-01"}, 
        {"Device Name": "Apple", "Device Type": "B", "Serial Number": "2", "Manufacturer": "Y", "Purchase Date": "2020-01-02"}, 
        {"Device Name": "Banana", "Device Type": "C", "Serial Number": "3", "Manufacturer": "Z", "Purchase Date": "2020-01-03"}, 
        ] 
    expected7 = ( 
        "Device Name,Device Type,Serial Number,Manufacturer,Purchase Date\n" 
        "Apple,B,2,Y,2020-01-02\n" 
        "Banana,C,3,Z,2020-01-03\n" 
        "Zebra,A,1,X,2020-01-01" 
        ) 
    tests.append((7, inv7, expected7, "Device Name")) 
        # Test 8: sort by Purchase Date (with a None value) 
    inv8 = [ 
        {"Device Name": "Laptop", "Device Type": "A", "Serial Number": "1", "Manufacturer": "X", "Purchase Date": "2023-01-15"}, 
        {"Device Name": "Server", "Device Type": "B", "Serial Number": "2", "Manufacturer": "Y", "Purchase Date": None}, 
        {"Device Name": "Monitor", "Device Type": "C", "Serial Number": "3", "Manufacturer": "Z", "Purchase Date": "2022-12-01"}, 
        ] 
    expected8 = ( 
        "Device Name,Device Type,Serial Number,Manufacturer,Purchase Date\n" 
        "Server,B,2,Y,\n"                     
        # None becomes empty string, sorts first 
        "Monitor,C,3,Z,2022-12-01\n" 
        "Laptop,A,1,X,2023-01-15" 
        ) 
    tests.append((8, inv8, expected8, "Purchase Date")) 
    print("Running tests...\n") 
    all_passed = True 
    for tid, inv, exp, *sort in tests: 
        sort_by = sort[0] if sort else None 
        if not run_test(tid, inv, exp, sort_by): 
            all_passed = False 
        print() 
        print("=" * 50) 
        if all_passed: 
            print("All test cases PASSED.") 
        else: 
            print("Some test cases FAILED.") 