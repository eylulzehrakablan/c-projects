//understanding the basics of c programming language

#include <stdio.h>

int main() {

    int num1, num2, sum;
    float float_num;
    char character;

    num1 = 8;
    num2 = 103;

    sum = num1 + num2;

    float_num = 48.19462024;

    character = 'E';

    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);
    printf("Sum: %d\n", sum);
    printf("Float: %.2f\n", float_num);
    printf("Character: %c\n", character);

    return 0;
}