//WAP to interchange the smallest and the largest number

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[10];
    int small,small_pos;
    int large,large_pos;

    // initialize array with random values
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100; // numbers between 0–99
    }

    small = arr[0];
    small_pos=0;
    large=arr[0];
    large_pos=0;
    for(int i=0;i<10;i++)
    {
        if (arr[i]<small)
        {
            small = arr[i];
            small_pos=i;
        }
        if (arr[i]>large)
        {
            large = arr[i];
            large_pos=i;
        }
    }
    // print the array
    printf("Array elements of the original array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    printf("Smallest number = %d at position = %d\n", small, small_pos);
    printf("largestest number = %d at position = %d\n", large, large_pos);

    //Swapping the largest and smallest Number
    int temp;
    temp = arr[large_pos];
    arr[large_pos]=arr[small_pos];
    arr[small_pos]=temp;

    // print the array
    printf("Array elements after array swap:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
}