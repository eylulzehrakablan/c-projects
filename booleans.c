#include <stdio.h>

int main() {
    int bool1, bool2;

    bool1 = 1;  
    bool2 = 0;

    int and = bool1 && bool2;
    int or = bool1 || bool2;  
    int not = !bool1;     

    int andTrue = bool1 && bool1;
    int orTrue = bool1 || bool1;

    int andFalse = bool2 && bool2;
    int orFalse = bool2 || bool2;

    // in a situation as one of the bools is true and the other one is false: 

    printf("bool1: %d\n", bool1);
    printf("bool2: %d\n", bool2);
    printf("bool1 && bool2: %d\n", and);
    printf("bool1 || bool2: %d\n", or);
    printf("!bool1: %d\n", not);

    // if both of them were true:

    printf("\nbool1 && bool1: %d\n", andTrue);
    printf("bool1 || bool1: %d\n", andTrue);
    
    // if both of them were false:

    printf("\nbool2 && bool2: %d\n", andFalse);
    printf("bool2 || bool2: %d\n", orFalse);

    return 0;
}