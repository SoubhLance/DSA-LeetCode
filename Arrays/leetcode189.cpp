#include<bits/stdc++.h>

using namespace std;



class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();

        if(n <= 1)
            return;

        int d = k % n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + d);
        reverse(nums.begin() + d, nums.end());
    }
};