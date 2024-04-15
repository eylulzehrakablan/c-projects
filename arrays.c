//creating, accessing and modifyşng an array.

#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    printf("Elements of the 'numbers' array: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }

    numbers[2] = 6;

    printf("\nChanged 'numbers' array: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }
    
    return 0;
}