// reverse an array

#include<bits/stdc++.h>
using namespace std;

vector<int> rev(vector<int> &arr)
{
    vector<int> reversed;
    for(int i = arr.size() - 1; i >= 0; i--)
    {
        reversed.push_back(arr[i]);
    }
    return reversed;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        arr.push_back(p);
    }
    vector<int> ans = rev(arr);
    cout << "Reversed array: ";
    for(auto x : ans)
    {
        cout << x << " ";
    }

    return 0;
}