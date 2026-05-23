// Question 5 — Frequency of Elements

#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    //PreCompute 
    int hash[n]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }

     // Number of queries
    int q;
    cin >> q;

    while(q--) {
        int number;
        cin >> number;

        cout << hash[number] << endl;
    }

    return 0;
}