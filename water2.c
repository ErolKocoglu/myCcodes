/*#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    double temperature;
    char unit;
    double altitude;
    printf("Enter temperature (end with F for Fahrenheit or C for Celsius): ");
    scanf("%lf %c", &temperature, &unit);
    printf("Enter altitude in meters: ");
    scanf("%lf",&altitude);

    if (unit == 'C') {
        if (temperature < 100 - altitude/300 && temperature > 0) {
            printf("Water is Liquid at %.2lf degrees Celsius\n", temperature);
        } else if (temperature > 100 - altitude/300) {
            printf("Water is Gas (Vapor) at %.2lf degrees Celsius\n", temperature);
        } else {
            printf("Water is Solid at %.2lf degrees Celsius\n ", temperature);
        }
    } else if (unit == 'F') {
        if (temperature < 32 - altitude/300.0) {
            printf("Water is Solid (Ice) at %.2lf degrees Fahrenheit\n", temperature);
        } else if (temperature > 32 && temperature < 212) {
            printf("Water is Liquid at %.2lf degrees Fahrenheit\n", temperature);


        }else{
            printf("Water is Gas at %.2lf degrees Fahrenheit\n", temperature);

        }
    } else {
        printf("Please enter temperature unit as either C or F.\n");
        return EXIT_FAILURE;
    }


    return 0;
}*/

//
// Created by User on 17.03.2022.
//

