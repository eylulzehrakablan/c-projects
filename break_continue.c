#include <stdio.h>

int main() {

    printf("Break statement:\n");
    for (int i = 1; i <= 5; i++) {
        if (i == 4) {
            break;
        }
        printf("%d\n", i);
    }

    printf("\nContinue statement:\n");
    for (int i = 1; i <= 5; i++) {
        if (i == 4) {
            continue; 
        }
        printf("%d\n", i);
    }
    printf("\n");

    return 0;
}