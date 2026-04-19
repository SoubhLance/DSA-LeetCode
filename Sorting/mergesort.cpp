//Merge Sort in C++
// Merge Sort is a divide and conquer algorithm that divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves.
// The time complexity of merge sort is O(n log n) in all cases.
// The space complexity of merge sort is O(n) because we need to create temporary arrays to hold the two halves of the array during the merge process.


#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;


void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    //low to mid
    //mid+1 to high
    int left = low;
    int right = mid+1;
    
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid) 
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high) 
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low; i <= high; i++) 
    {
        arr[i] = temp[i - low];
    }   
}

void MS(vector<int> &arr, int low, int high){
    if(low==high) return;
    int mid = (low+high)/2;
    //left half
    MS(arr,low,mid);
    //right half
    MS(arr,mid+1,high);
    //merge
    merge(arr,low,mid,high);
}

void Merge_Sort(vector<int> &arr, int n ){
    MS(arr,0,n-1);
}



int main(){
    vector<int> arr;
    int n;
    cout<<"Enter the number of elements in the array: "<<endl;
    cin>>n;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<"The elements of the array are: ";
    for(auto x: arr){
        cout<<x<<" "<<endl;
    }

    Merge_Sort(arr,n);

    cout<< "The sorted array is: "<<endl;
    for(auto x: arr){           
        cout<<x<<" ";
    }
    return 0;
}