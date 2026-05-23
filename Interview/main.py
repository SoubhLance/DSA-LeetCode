# #try catch block

# try:
#     num = int(input())
#     result = 10/num
# except ValueError:
#     print("Invalid Input")
# except ZeroDivisionError:
#     print("Can't be divided by zero")

# print("Program exected")




# class Student:
#     def __init__(self,name,age):
#         self.name= name
#         self.age = age

#     def display(self):
#         print("Name: ",self.name)
#         print("Age: ",self.age)

# numbers =[12,20,30,10]
# results = list(lambda x:x*2,numbers)


# Write a function called `run_length_encode` that takes a string and performs basic Run-Length Encoding (RLE) on it. RLE is a form of data compression where runs of identical characters are replaced by the count and the character itself. The output should be a single string.
# You can assume the input string contains only alphabetical characters and is non-empty.
# Example 1: `run_length_encode("AAABBCcAA")`
# Should return: `"3A2B1C1c2A"`
# Example 2: `run_length_encode("a")`
# Should return: `"1a"

# def run_length_encode(s):
#     stng=''
#     count = 1
#     for i in range(1,len(s)):
#         if(s[i]==s[i-1]):
#             count+=1
#         else:
#             stng += str(count) + s[i-1]
#             count = 1
#     stng += str(count)+s[-1]

#     return stng

# print(run_length_encode("AAABBCcAA"))
# print(run_length_encode("a"))