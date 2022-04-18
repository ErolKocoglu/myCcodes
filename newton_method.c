/*#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define EPSILON 0.001
#define ERROR 0.0001*/

/*int main() {
    double a;
    double b;
    double c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double x = 1;
    double y1, y2;
    double m;

    while (fabs(a * x * x + b * x + c) >= ERROR) {
        y1 = a * (x - EPSILON) * (x - EPSILON) + b * (x - EPSILON) + c;
        y2 = a * (x + EPSILON) * (x + EPSILON) + b * (x + EPSILON) + c;

        m = (y2 - y1) / (2 * EPSILON);

        if (!m) m += EPSILON;

        x = (-y1 / m) + (x - EPSILON);
    }
    printf("Root: %.2lf\n", x);


    return EXIT_SUCCESS;
}*/


//
// Created by User on 24.03.2022.
//

