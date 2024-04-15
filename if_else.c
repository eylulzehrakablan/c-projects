//an if-else statement which prints if the given number is positive, negative or zero.

#include <stdio.h>

int main() {
    int num = 5;

    if (num > 0) {
        printf("%d is positive.", num);
    } else if (num < 0) {
        printf("%d is negative.", num);
    } else {
        printf("%d is zero.", num);
    }

    return 0;
}