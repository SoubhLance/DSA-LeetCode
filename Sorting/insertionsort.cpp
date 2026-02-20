//Insertion Sort 
// we insert the element in the right place in the array so the array is sorted at the end of the loop
// The Time Complexity of insertion sort is O(n^2) in the worst case when the array is sorted in reverse order, and O(n) in the best case when the array is already sorted.


#include <iostream>
using namespace std;

int swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int insertionSort(int arr[],int n)
{
    for(int i=0;i<=n-1;i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j],arr[j-1]);
            j--;
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
        cin>> arr[i];
    }
    insertionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<< arr[i] << " ";
    }
    return 0;
}