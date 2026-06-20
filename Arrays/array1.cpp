// Finding the largest elemet in an array

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr = {10,20,8,96,45};
    int lar = arr[0];
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>lar)
        {
            lar=arr[i];
        }
    }
    cout<< "The Largest element in an array is "<< lar<<endl;


    return 0;
}