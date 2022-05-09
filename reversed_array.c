#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

void swap(int *first, int *second) {
    int temp = *first;
    *first = *second;
    *second = temp;

}

void random_fill_array(int *arr) {
    int random_number;
    int selected[ARRAY_SIZE] = {0};
    srand(0);

    for (int i = 0; i < ARRAY_SIZE; i++) {
        do {
            random_number = rand() % ARRAY_SIZE;
        } while (selected[random_number] == 1);

        selected[random_number] = 1;
        arr[i] = random_number;
    }
    /*int size=0;
    while(size<ARRAY_SIZE){
        int value=rand()%ARRAY_SIZE;
        if(size==0){
            arr[size]=value;
            size++;
        }
    }*/


}

int main() {
    int myArray[ARRAY_SIZE];
    srand(0);

    random_fill_array(myArray);

    printf("ORIGINAL ARRAY: ");

    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%-5d", myArray[i]);
    }
    printf("\n");

    for (int i = 0; i < ARRAY_SIZE / 2; i++) {
        swap(&myArray[i], &myArray[ARRAY_SIZE - i - 1]);
    }

    printf("REVERSE ARRAY:  ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%-5d", myArray[i]);
    }
    printf("\n");


    return EXIT_SUCCESS;
}

//
// Created by User on 9.05.2022.
//

