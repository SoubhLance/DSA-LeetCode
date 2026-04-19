// LeetCode Problem Number 88 
// Merge Sorted Array - two arrays are there merge them and sort them in place
// input -> nums1=[1,2,3,0,0,0], m=3, nums2=[2,5,6], n=3
// output -> [1,2,2,3,5,6]

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while(i >= 0 && j >= 0){
        if(nums1[i] > nums2[j]){
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    while(j >= 0){
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

int main(){
    int m, n;

    cout << "Enter m: ";
    cin >> m;

    cout << "Enter elements of nums1 (only m elements): ";
    vector<int> nums1(m);
    for(int i = 0; i < m; i++){
        cin >> nums1[i];
    }

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter elements of nums2: ";
    vector<int> nums2(n);
    for(int i = 0; i < n; i++){
        cin >> nums2[i];
    }

    // resize nums1 to m+n (important)
    nums1.resize(m + n);

    merge(nums1, m, nums2, n);

    cout << "Merged array:\n";
    for(int x : nums1){
        cout << x << " ";
    }

    cout<< "\nThe Sorted Array: "<< endl;
        for(int x: nums1){
            cout << x << " ";
        }   

    return 0;
}