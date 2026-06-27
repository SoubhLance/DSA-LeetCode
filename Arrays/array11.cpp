// Linear Search

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int j=-1;
    int target = 4;
    vector<int> arr = {6,7,8,4,1};
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==target)
        {
            j=i;
        }
    }
    if(j==-1){
        cout<< "The target elemet is not present in the array"<<endl;
    }
    else{
        cout<<"The position of the target value("<<target<<") is "<< j<<endl;
    }
}