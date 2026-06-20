//WAP to insert a number at a given location

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements in an array");
    scanf("%d",&n);
    int arr[n];

    for(int i = 0; i < n ; i++){
        scanf("%d", &arr[i]);
    }
    

    // // Fill array with random numbers
    // for (int i = 0; i < n; i++) {
    //     arr[i] = rand() % 100;
    // }

    printf("Original Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    int pos, val;
    printf("\nEnter the position of the new element to insert: ");
    scanf("%d", &pos);
    printf("\nEnter the value of the new element to insert: ");
    scanf("%d", &val);

    //checking for the invalid position
    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
   
    arr[pos] = val; // insert new value
     n++;            // increase size

    printf("\nArray after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    int new_size = sizeof(arr)/sizeof(arr[0]);
    printf("\nNew size of array is : %d", new_size);

    return 0;
}
