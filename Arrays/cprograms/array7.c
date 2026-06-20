// Exercise 5.5
// Data[] is an array that is declared as int Data[20] and contains the following values:
// Data[] = {12, 23, 34, 45, 56, 67, 78, 89, 90, 100}
// (a) Calculate the length of the array.
// (b) Find the upper bound and lower bound.
// (c) Show the memory representation of the array.
// (d) If a new data element with value 75 has to be inserted, find its position.
// (e) Insert the new data element and then show the memory representation of the array.


#include<stdio.h>

int main()
{
    int Data[] = {12, 23, 34, 45, 56, 67, 78, 89, 90, 100};
    
    //a
    int n = sizeof(Data) / sizeof(Data[0]);
    printf("%d",n);

    //b
    int lower_bound = 0;      // always 0 in C
    int upper_bound = n - 1;  // last index
    
    printf("Lower Bound = %d\n", lower_bound);
    printf("Upper Bound = %d\n", upper_bound);

    //c
    printf("Array elements with memory addresses:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d \t stored at address %p\n", i, Data[i], (void*)&Data[i]);
    }

    //d
    

}