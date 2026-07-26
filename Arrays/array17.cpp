// Dutch National Flag Algorithm - Sort Colors

#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int>& arr, int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> arr = {0,1,2,0,1,2,1,2,0,0,0,1};
    int n = arr.size();

    sortArray(arr, n);

    for(int x : arr)
        cout << x << " ";

    return 0;
}