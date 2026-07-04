// Find the missing Number 
//brute force 

#include<bits/stdc++.h>

using namespace std;

int missing_number(vector<int> &arr)
{
    int n=arr.size();
    for(int i=1;i<=n;i++)
    {
        int flag=0;
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]==i)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            return i;
        }
    }
}


int main()
{
    vector<int> arr = {1,2,3,5};
    int miss_no = missing_number(arr);
    cout<<"The missing Number is "<<miss_no<<endl;
    
}