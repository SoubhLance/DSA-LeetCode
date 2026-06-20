// Initializing the array with even numbers and odd numbers
#include <stdio.h>

int main()
{
    int n;
    printf("Give the number of values to be in the array: ");
    scanf("%d", &n);

    int a[n];
    int b[n];

    // Fill arrays with even and odd numbers
    for (int i = 0; i < n; i++) {
        a[i] = i * 2;
        b[i] = i * 2 + 1;
    }

    // Print even numbers
    printf("The Even Number array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n"); // new line

    // Print odd numbers
    printf("The Odd Number array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}
