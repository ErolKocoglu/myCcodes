#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define SIZE 10
#define WIN_SIZE 3

int main() {
    double input[SIZE];
    for (int i = 0; i < SIZE; i++) {
        printf("Enter the value for %d \n", i + 1);
        scanf("%lf", &input[i]);
    }

    double cumulativeAvg[SIZE];

    double total = 0;
    for (int i = 0; i < SIZE; i++) {
        total += input[i];

        cumulativeAvg[i] = total / (i + 1);
    }

    double movingAvg[SIZE] = {0};

    for (int i = WIN_SIZE - 1; i < SIZE; i++) {
        total = 0;
        for (int j = i; j > i - WIN_SIZE; j--) {
            total += input[j];
        }
        movingAvg[i] = total / WIN_SIZE;
    }
    /*for (int i = 0; i <= SIZE - WIN_SIZE; i++) {
        total = 0;
        for (int j = i; j < j + WIN_SIZE; j++) {
            total += input[j];
        }
        movingAvg[i] = total / WIN_SIZE;
    }*/

    printf("-Exchange Rate - Cumulative Average - Moving Average -\n");
    for (int i = 0; i < SIZE; i++) {
        printf("| %.3lf             | %.3lf             | %.3lf             |\n", input[i], cumulativeAvg[i],
               movingAvg[i]);
    }
    for (int i = 0; i < 55; i++) {
        printf("-");
    }
    printf("\n");


    return 0;
}

//
// Created by User on 14.04.2022.
//

