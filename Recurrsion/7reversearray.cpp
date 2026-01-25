//Reversing an array using Recurrsion

#include <iostream>
using namespace std;

void reverse(int arr[], int l, int r)
{
    if (l >= r)   // base case
        return;

    swap(arr[l], arr[r]);      // kaam
    reverse(arr, l + 1, r - 1); // recursion
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    reverse(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
