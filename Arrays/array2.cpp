// Second largest element in an array 

#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr = {10,60,50,40,9,4,6,96,54,2,8,75,36,21,5};
    int lar = arr[0];
    int sec_lar = -1;

    for(int i = 1; i < arr.size(); i++)
    {
        if(arr[i] > lar)
        {
            sec_lar = lar;
            lar = arr[i];
        }
        else if(arr[i] > sec_lar && arr[i] != lar)
        {
            sec_lar = arr[i];
        }
    }
    cout<<"The second largest element is :"<<sec_lar<<endl;
}
