//WAP to find the second largest number using array of n numbers 

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[10];
    int large,pos,second_largest,second_pos;
    
    // initialize array with random values
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100; 
    }

    // find largest element
    large=arr[0];
    pos=0;
    for(int i=0;i<10;i++)
    {
        if (arr[i]>large)
        {
            large = arr[i];
            pos=i;
        }
    }
    
    // initializing the second_largest with something not equal to largest
    if (pos == 0) {
        second_largest = arr[1];
        second_pos = 1;
    } else {
        second_largest = arr[0];
        second_pos = 0;
    }

    // find second largest
    for (int i = 0; i < 10; i++) {
        if (i == pos) continue;    // skip the largest element
        if (arr[i] > second_largest) {
            second_largest = arr[i];
            second_pos = i;
        }
    }

    printf("Largest element = %d at position %d\n", large, pos);
    printf("Second largest element = %d at position %d\n", second_largest, second_pos);

    return 0;
}

// TC = O(n)