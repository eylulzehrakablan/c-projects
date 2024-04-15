//a c program that you can learn your future by drawing a card

#include <stdio.h>

int main() {
    int card;

    printf("Welcome to the fortune teller.\n");
    printf("Please pick one of these three cards: (1-2-3)");
    scanf("%d", &card);

    switch (card) {
        case 1:
            printf("Hmm... I see you sitting in a plush chair by the fire... you're surrounded by luxury, yet filled with lonely desperation.\n");
            break;
        case 2:
            printf("The one you love is closer than you think.\n");
            break;
        case 3:
            printf("Your money, here, have it back. The fortune you’ve asked me to read, never shall I speak of it in this life or any hereafter.\n");
            break;
        default:
            printf("There is no card as %d\n", card);
    }

    return 0;
}