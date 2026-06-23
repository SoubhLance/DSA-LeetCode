// remove duplicates from teh array optimal approach 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {10,50,60,40,86,54,54,21,23,10,25};

    sort(arr.begin(), arr.end());

    int i = 0;

    for(int j = 1; j < arr.size(); j++)
    {
        if(arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }

    int uniqueCount = i + 1;

    cout << "Unique Elements: ";

    for(int k = 0; k < uniqueCount; k++)
    {
        cout << arr[k] << " ";
    }

    cout << "\nCount = " << uniqueCount << endl;

    return 0;
}