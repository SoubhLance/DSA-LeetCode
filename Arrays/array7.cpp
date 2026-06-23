// left rotate array by k places 

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector<int> arr;
    cout<<"Enter the number of elemenst to be pushed in an array";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        arr.push_back(p);
    }

    int temp = arr[0];
    for(int j=1;j<arr.size();j++)
    {
        arr[j-1] = arr[j];
    }
    arr[n-1] = temp;

    for(auto x: arr)
    {
        cout<<x<<" ";
    }
    return 0;
}