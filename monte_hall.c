/*#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define ITERATIONS 10000000

int main() {
    srand(time(NULL));
    int trueGuess = 0;

    for (int i = 0; i < 10000000; i++) {
        int guess = rand() % 3 + 1;
        int win = rand() % 3 + 1;
        if (guess == win) {
            trueGuess++;
        }
    }
    printf("win ratio for strategy 1: %.3lf\n", (double) trueGuess / 10000000);
    trueGuess = 0;
    for (int i = 0; i < 10000000; i++) {
        int win = rand() % 3 + 1;
        int guess1 = rand() % 3 + 1;
        int guess2 = rand() % 3 + 1;
        while (guess1 == guess2) {
            guess2 = rand() % 3 + 1;
        }
        if (guess2 == win ||guess1!=win) {
            trueGuess++;
        }
    }
    printf("win ratio for strategy 2: %.3lf\n", (double) trueGuess / 10000000);

    return EXIT_SUCCESS;


}*/

//
// Created by User on 24.03.2022.
//

