//WAP to read and display n random integers in an array


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 10;

    for (int i = 0; i < n; i++) {
        int num = rand() % 100;   // random number 0–99
        printf("%d\n", num);
    }

    return 0;
}
