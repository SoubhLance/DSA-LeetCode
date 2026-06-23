// Remove duplicates from the array -- brute force approach 

#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr = {105,45,78,96,54,23,10};
    set<int> st;
    for(int i=0;i<arr.size();i++)
    {
        st.insert(arr[i]);
    }
    for(auto x: st)
    {
        cout<<x<<endl;
    }
    return 0;
}