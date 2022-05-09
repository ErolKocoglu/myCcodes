/*#include <stdio.h>
#include <stdbool.h>

int main() {
    int originArray[10];
    printf("Enter 10 numbers:");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &originArray[i]);
    }
    printf("Original Array:");
    for (int i = 0; i < 10; i++) {
        printf(" %d", originArray[i]);
    }
    printf("\n");

    int length = 9;

    for (int i = 0; i < length; i++) {
        int tempValue;
        bool isOk = false;
        if (originArray[i] > originArray[i + 1]) {
            tempValue = originArray[i + 1];
            originArray[i + 1] = originArray[i];
            originArray[i] = tempValue;
        }
        if (i == length - 1) {
            for (int j = 0; j < length; j++) {
                if (originArray[j] > originArray[j + 1]) {
                    isOk = false;
                    break;
                }
                if (j == length - 1) {
                    isOk = true;
                }
            }
            if (isOk == false) {
                i = -1;
                length--;
            }
        }


    }

    printf("Sorted Array(Ascending):");
    for (int i = 0; i < 10; i++) {
        printf(" %d", originArray[i]);
    }
    printf("\n");

    printf("Sorted Array(Descending):");
    for (int i = 9; i >= 0; i--) {
        printf(" %d", originArray[i]);
    }
    printf("\n");

    return 0;
}*/

//
// Created by User on 9.05.2022.
//

