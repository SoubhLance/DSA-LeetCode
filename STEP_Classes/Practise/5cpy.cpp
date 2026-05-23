// Hashing using the underordered map 

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements you want to enter in an array"<<endl;
    cin>>n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int,int> mp;

    for(auto x : arr)
    {
        mp[x]++;
    }

    for(auto x : mp)
    {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}