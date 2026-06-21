// check if the array is sorted already or not in decending order 

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr = {100,99,90,86,75,74,60,52,45,32,22,11,9,6,4,2,0};
    bool sorted = true;
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            sorted = false;
            break;
        }
    }
    if(sorted == true)
    {
        cout<<"The array is aleady sorted in descending order"<<endl;
    }
    else{
        cout<<"Not sorted"<<endl;
    }
}