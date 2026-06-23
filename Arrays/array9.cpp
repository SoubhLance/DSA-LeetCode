// left rotation on k places optimal 


#include<bits/stdc++.h>

using namespace std;


int rotate(vector<int>& nums, int k) {

    int n = nums.size();

    if(n <= 1)
        return;

    int d = k % n;

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + d);
    reverse(nums.begin() + d, nums.end());
}

int main()
{
    vector<int> arr = {10,20,30,40,52,69,87,12,45,55,78,};
    int k;
    cin>>k;
    rotate(arr,k);
    return 0;
}