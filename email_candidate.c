#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 50


void generateCandidateEmails(char *name, char *surname, int birthyear) {
    //candidate1 : initial of name + surname + last 2 digits of the year

    char candidate1[MAX_SIZE];
    char candidate2[MAX_SIZE];
    char candidate3[MAX_SIZE];
    char ending[MAX_SIZE] = "@itu.edu.tr";
    candidate1[0] = name[0];
    int last2 = birthyear % 100;
    int i = 0, j = 1;
    while (surname[i] != '\0') {
        candidate1[j] = surname[i];
        i++;
        j++;
    }

    char digits2[2];
    sprintf(digits2, "%d", last2);
    i = 0;
    while (digits2[i] != '\0') {
        candidate1[j] = digits2[i];
        i++;
        j++;
    }
    i = 0;
    while (ending[i] != '\0') {
        candidate1[j] = ending[i];
        i++;
        j++;
    }
    candidate1[j] = '\0';
    printf("Email Candidate 1: %s\n", candidate1);

    srand(time(NULL));
    candidate2[0] = name[0];
    candidate2[1] = name[1];
    candidate2[2] = surname[0];
    candidate2[3] = surname[1];
    int random = rand() % 9000 + 1000;
    char digits4[4];
    sprintf(digits4, "%d", random);
    j = 4;
    i = 0;
    while (digits4[i] != '\0') {
        candidate2[j] = digits4[i];
        i++;
        j++;
    }
    i = 0;
    while (ending[i] != '\0') {
        candidate2[j] = ending[i];
        i++;
        j++;
    }
    candidate2[j] = '\0';
    printf("Email Candidate 2: %s\n", candidate2);
    j = 0;
    i = 0;
    while (surname[i] != '\0') {
        candidate3[j] = surname[i];
        i++;
        j++;
    }
    i = 0;

    while (name[i] != '\0') {
        candidate3[j] = name[i];
        i++;
        j++;
    }
    i = 0;

    char year4[4];
    sprintf(year4, "%d", birthyear);
    while (year4[i] != '\0') {
        candidate3[j] = year4[i];
        i++;
        j++;
    }
    i = 0;
    while (ending[i] != '\0') {
        candidate3[j] = ending[i];
        i++;
        j++;
    }
    candidate3[j] = '\0';
    printf("Email Candidate 3: %s\n", candidate3);


}

int main() {
    srand(time(NULL));
    char name[MAX_SIZE];
    char surname[MAX_SIZE];
    int birthyear;

    printf("Enter Your Name:");
    scanf("%s", name);
    printf("Enter Your Surname:");
    scanf("%s", surname);
    printf("Enter Your Birthyear:");
    scanf("%d", &birthyear);

    generateCandidateEmails(name, surname, birthyear);

    return 0;
}

//
// Created by User on 12.05.2022.
//

