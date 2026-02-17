//Selection Sort [we select the smallest element and swap it]
// The Time Complexity of selction sort is O(n^2) in all cases because we have to compare each element with every other element to find the minimum.

#include <iostream>
using namespace std;

int swap(int &a, int &b)
{
    int temp = a;
    a=b;
    b=temp;
}

int selection_sort(int arr[],int n)
{
    for(int i=0;i<=n-2;i++)
    {
        int min=i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[min]) min = j;
        }
        swap(arr[min],arr[i]);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}