/*

Simple random number guessing game

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int on = 1, attempts = 10, num = random() % 100 + 1, guess;
    printf("%d", num);

    while (on == 1 && attempts > 0) {
        printf("Guess an integer between 1 and 100 (you have %d attempts): ", attempts);
        scanf("%d", &guess);

        if (guess < num) {
            attempts -= 1;
            printf("Higher.\n");
        }

        else if (guess > num) {
            attempts -= 1;
            printf("Lower.\n");
        }

        else if (guess == num) {
            attempts -= 1;
            printf("Correct. The number was %d. You guessed correctly in %d attempts.\n", num, 10 - attempts);
            on = 0;
        }
    }

    return 0;
}
