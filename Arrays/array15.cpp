// Missing Number Optimal Approach

#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums)
{
    int n = nums.size();

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }

    int total = (n * (n + 1)) / 2;

    return total - sum;
}

int main()
{
    int n;
    cin >> n;   // Number of elements in the array

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int number = missingNumber(arr);
    cout << "The Missing Number is " << number;

    return 0;
}