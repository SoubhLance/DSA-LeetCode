//check if an array is sorted or not 

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {1,2,3,56,89,98,102,122,130};
    bool sorted=true;
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]>=arr[i-1])
        {
            sorted = true;
        }
        else
        {
            sorted = false;
        }
    }
    if(sorted == true)
    {
        cout<<"The array is alreeady sorted"<<endl;
    }
    else{
        cout<<"The array is not sorted"<<endl;
    }
}