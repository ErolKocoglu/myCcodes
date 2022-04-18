#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//double getRandomNumber(double lower_limit, double upper_limit) {
    /*srand(time(NULL));
    double range = upper_limit - lower_limit;
    double div = RAND_MAX / range;
    return lower_limit + (rand() / div);*/
    //return lower_limit + (upper_limit - lower_limit) * rand() / RAND_MAX;
//}

/*double calculatePi(int max_iteration) {
    double x, y;
    int inside_circle = 0;
    for (int i = 0; i < max_iteration; i++) {
        x = getRandomNumber(-1.0, 1.0);
        y = getRandomNumber(-1.0, 1.0);
        if ((x * x + y * y) <= 1.0) {
            inside_circle++;
        }
    }
    return (4.0 * inside_circle / max_iteration);

}

int main() {
    srand(time(NULL));
    int max_iteration = 100;
    printf("Estimated Pi's = %.3lf..\n", calculatePi(max_iteration));

    double mean=0.0;
    int trial=100;
    for(int i=0;i<trial;i++){
        mean+= calculatePi(max_iteration);
    }
    mean/=trial;

    printf("Mean Value of 100 Estimated Pi's = %.3lf..", mean);


    return EXIT_SUCCESS;
}*/


//
// Created by User on 7.04.2022.
//

