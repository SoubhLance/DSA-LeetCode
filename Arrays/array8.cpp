// left rotate array by k places
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {10,5,4,8,75,9,9,6,40,3,46,57};

    int n = arr.size();
    int d = 3;

    vector<int> temp;

    for(int i=0;i<d;i++)
    {
        temp.push_back(arr[i]);
    }

    for(int i=d;i<n;i++)
    {
        arr[i-d] = arr[i];
    }

    for(int i=n-d;i<n;i++)
    {
        arr[i] = temp[i-(n-d)];
    }

    for(auto x:arr)
    {
        cout<<x<<" ";
    }

    return 0;
}