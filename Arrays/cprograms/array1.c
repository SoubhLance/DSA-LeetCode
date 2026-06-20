// Initializing an Array and then displaying it  
//WAP  to read and display n numbers using an array



#include <stdio.h>

int main()
{
    int n;
    printf("Give the number of values to be in the array: ");
    scanf("%d", &n);

    int a[n];  

    for (int i = 0; i < n; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("The values in the array are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
