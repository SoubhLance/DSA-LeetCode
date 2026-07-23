// Move all the zeros to the end of the array

#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a)
{
    int j = -1;

    // Find the first zero
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            j = i;
            break;
        }
    }

    // No zeros present
    if (j == -1)
        return a;

    // Move non-zero elements to the left
    for (int i = j + 1; i < n; i++)
    {
        if (a[i] != 0)
        {
            swap(a[i], a[j]);
            j++;
        }
    }

    return a;
}

int main()
{
    vector<int> arr = {1, 0, 2, 0, 3, 4, 0, 5};
    int n = arr.size();

    arr = moveZeros(n, arr);

    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}