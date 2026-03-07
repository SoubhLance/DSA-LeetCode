//alternate Increment Diamond Pattern Digit Powers 

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n=2000;
    vector<int> arr(n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            arr[i]=i;
            sum+=arr[i];
        }
    }
    for (int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            cout << arr[i] << " ";
        }
    }   
}