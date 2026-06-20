// WAP to insert a number in an array that is already sorted in ascending order

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[11] = {6, 10, 20, 22, 33, 39, 40, 54, 60, 99}; // space for one extra element
    int n = sizeof(arr) / sizeof(arr[0]) - 1; // currently 10 elements used
    int num, low = 0, high = n - 1, mid, pos = n;

    printf("Enter the number to insert: ");
    scanf("%d", &num);

    // binary search to find position
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == num)
        {
            pos = mid; // insert before equal element
            break;
        }
        else if (arr[mid] < num)
        {
            low = mid + 1;
        }
        else
        {
            pos = mid;
            high = mid - 1;
        }
    }

    if (pos == n) pos = low; // if number is largest, insert at end

    // shift elements to right
    for (int j = n; j > pos; j--)
    {
        arr[j] = arr[j - 1];
    }

    arr[pos] = num;
    n++;

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


//Time complexity (0logn)