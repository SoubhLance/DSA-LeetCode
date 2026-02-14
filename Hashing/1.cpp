//Hasing and calculating the term frequency 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    //precompute 
    int hash[13]={0}; //hashing array to store the frequency of each number from 0 to 12 
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]+=1; //increment the frequency of the number in the hash array
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin>>number;
        //fetch
        cout<<"Hash number of "<<number<<" is "<<hash[number]<<endl; //print the frequency of the number from the hash array
    }
    
    return 0;
}