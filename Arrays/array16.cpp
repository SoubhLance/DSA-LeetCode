//optimal Solution to the longest subarray sum of K -- two pointer approach

#include<bits/stdc++.h>
using namespace std;

long long longestSubarrayWithSumK(vector<int> arr,long long k)
{
    int left =0, right = 0;
    long long sum = arr[0];
    int maxlen = 0;
    int n = arr.size();
    while(right<n)
    {
        while(left<= right && sum>k)
        {
            sum-=arr[left];
            left++;

        }
        if(sum == k)
        {
            maxlen = max(maxlen,right-left+1);
        }
        right++;
        if(right<n) sum+=arr[right];

    }
    return maxlen;

}

int main()
{
    vector<int> arr = {1,2,3,1,1,1,1,4,2,3};
    int k = 3;
    int the_longest_subbary = longestSubarrayWithSumK(arr,k);
    cout<<the_longest_subbary<<endl;
    return 0;
}