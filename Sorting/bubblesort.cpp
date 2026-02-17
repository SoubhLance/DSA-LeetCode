//Bubble Sorting
// Here in the bubble sort we push the maximium element to the end of the array in each iteration by adjacent swaps 
//The Time Complexity of bubble sort is O(n^2) in all cases because we have to compare each element with every other element to find the maximum.

#include<iostream>
using namespace std;

int swap(int &a, int &b)
{
    int temp = a;
    a=b;
    b=temp;
}

int bubble_sort(int arr[],int n)
{
    for(int i=n-1;i>=1;i--)
    {
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
}

int main()
{
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    bubble_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}