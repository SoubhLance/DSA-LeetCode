// Term Frequency in of the letters in cpp
// 1️⃣ int arr[] = {};
// This creates an empty array
// C++ does NOT allow zero-size arrays like this
// Compiler doesn’t know how much memory to allocate


// Option 1: If you want dynamic size → use vector (BEST)
// int n;
//     cin >> n;
//     vector<int> arr(n);

// Option 2: Fixed-size array (old-school)


#include<iostream>
#include<vector>
using namespace std;

void term_calc(vector<int> arr)
{
    int l = arr.size();
    
    for(int i = 0; i < l; i++)
    {
        int count = 0;

        // check if already printed
        bool alreadyPrinted = false;
        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                alreadyPrinted = true;
                break;
            }
        }

        if (alreadyPrinted)
            continue;
        
        // count frequency
        for (int j = 0; j < l; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        
        cout << arr[i] << " -----> " << count << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Term Frequency"<<endl;

    term_calc(arr);   
}
