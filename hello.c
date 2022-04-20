#include <stdio.h>
#include <math.h>

int main() {
    printf("Hello, World!\n");
    printf("  *  \n");
    printf(" *** \n");
    printf("*****\n");
    printf("-------\n");
    printf("  *  \n *** \n*****\n");
    printf("My average grade is: %f\n", 3.86);

    printf("%d + %d = %d\n", 5, 2, 5 + 2);
    printf("%d - %d = %d\n", 5, 2, 5 - 2);
    printf("%d * %d = %d\n", 5, 2, 5 * 2);
    printf("%d / %d = %d\n", 5, 2, 5 / 2);
    printf("%d %% %d = %d\n", 5, 2, 5 % 2);

    //Printing big x
    printf("*     *\n");
    printf(" *   * \n");
    printf("  * *  \n");
    printf("   *   \n");
    printf("  * *  \n");
    printf(" *   * \n");
    printf("*     *\n");

    //Calculate birth year
    /*int currentYear;
    int myAge;
    printf("Enter the current year\n");
    scanf("%d",&currentYear);
    printf("Enter your age\n");
    scanf("%d",&myAge);
    printf("Year you were born is: %d",(currentYear-myAge));*/

    //Calculate area of rectangle
    /*double heightOfRect;
    double widthOfRect;
    printf("Enter the height\n");
    scanf("%lf",&heightOfRect);
    printf("Enter the width\n");
    scanf("%lf",&widthOfRect);
    printf("The area of rectangle is: %lf",heightOfRect*widthOfRect);*/

    //Calculate average grade
    /*int grade1;
    int grade2;
    int grade3;
    double average;
    printf("Enter the first grade\n");
    scanf("%d",&grade1);
    printf("Enter the second grade\n");
    scanf("%d",&grade2);
    printf("Enter the third grade\n");
    scanf("%d",&grade3);
    printf("Your average grade is: %.3lf",(double)(grade1+grade2+grade3)/3);*/

    //Celsius-Fahrenheit converter
    /*double celsius, fahrenheit;
    printf("Enter celsius value: \n");
    scanf("%lf", &celsius);
    printf("The fahrenheit value is: %lf\n", celsius * 1.8 + 32);*/

    //Checking even or odd
    /*int number;
    printf("Enter the number:\n");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("%d is an even number", number);
    } else {
        printf("%d is an odd number", number);
    }*/

    //Determining max and min between two numbers
    /*double a;
    double b;
    printf("Enter first number:\n");
    scanf("%lf", &a);
    printf("Enter second number:\n");
    scanf("%lf", &b);
    if (a > b) {
        printf("MAX: %2.2lf\n", a);
        printf("MIN: %2.2lf\n", b);
    }else if(a==b){
        printf("These numbers are equal!");
    } else {
        printf("MAX: %2.2lf\n", b);
        printf("MIN: %2.2lf\n", a);

    }*/

    //Determining max and min between three numbers
    /*int a, b, c;
    int max, min;
    printf("Enter a:\n");
    scanf("%d",&a);
    printf("Enter b:\n");
    scanf("%d",&b);
    printf("Enter c:\n");
    scanf("%d",&c);
    max=a;
    min=b;
    if(a<b){
        max=b;
        min=a;
    }
    if(max<c){
        max=c;
    }
    if(min>c){
        min=c;
    }
    printf("MAX: %d\n",max);
    printf("MIN: %d\n",min);*/

    //Basic calculator
    /*int num1, num2;
    char operation;
    printf("Enter operation: \n");
    scanf("%c", &operation);
    printf("Enter first number: \n");
    scanf("%d", &num1);
    printf("Enter second number: \n");
    scanf("%d", &num2);
    switch (operation) {
        case '+':
            printf("%d + %d = %d", num1, num2, num1 + num2);
            break;

        case '-':
            printf("%d - %d = %d", num1, num2, num1 - num2);
            break;

        case '*':
            printf("%d * %d = %d", num1, num2, num1 * num2);
            break;

        case '/':
            if (num2 == 0) {
                printf("Dividing by zero is undefined");
            } else {
                printf("%d / %d = %.2lf", num1, num2, (double) num1 / num2);
            }
            break;

        case '%':
            if (num2 == 0) {
                printf("Dividing by zero is undefined");
            } else {
                printf("%d %% %d = %d", num1, num2, num1 % num2);
            }
            break;

        default:
            printf("Wrong input, try again!\n");
            break;
    }*/

    //Checking double or triple digits
    /*int number;
    printf("Enter the number: \n");
    scanf("%d", &number);
    if (number < 100 && number > 9) {
        printf("%d is double-digit", number);
    } else if (number > 99 && number < 1000) {
        printf("%d is triple-digit", number);
    } else {
        printf("%d is neither double-triple", number);
    }*/

    //Writing month from number
    /*int number;
    printf("Enter the month number: \n");
    scanf("%d", &number);
    switch (number) {
        case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
        default:
            printf("It is not a valid value");
            break;
    }*/

    //Unique clock representation
    /*int totalSeconds, hour, minute, second;
    printf("Enter total seconds: \n");
    scanf("%d", &totalSeconds);
    hour = totalSeconds / 3600;
    minute = (totalSeconds % 3600) / 60;
    second = totalSeconds % 60;
    if (hour > 9) {
        printf("%d : ", hour);
    } else {
        printf("0%d : ", hour);
    }
    if (minute > 9) {
        printf("%d : ", minute);
    } else {
        printf("0%d : ", minute);
    }
    if (second > 9) {
        printf("%d \n", second);
    } else {
        printf("0%d \n", second);
    }*/

    //Checking 3 numbers divisible
    /*int a, b, c;
    printf("Enter a:\n");
    scanf("%d", &a);
    printf("Enter b:\n");
    scanf("%d", &b);
    printf("Enter c:\n");
    scanf("%d", &c);
    if (a != 0 && b != 0 && c != 0) {
        if ((a % b == 0 || b % a == 0) && (a % c == 0 || c % a == 0) && (b % c == 0 || c % b == 0)) {
            printf("Divisible numbers!\n");
        } else {
            printf("Not divisible numbers!\n");
        }
    } else {
        printf("Do not enter zero");
    }*/

    //Checking leap year
    /*int year;
    printf("Enter the year:\n");
    scanf("%d", &year);
    if(year%400==0){
        printf("%d is leap year",year);
    }else if(year%100==0){
        printf("%d is not leap year",year);
    }else if(year%4==0){
        printf("%d is leap year",year);
    }else{
        printf("%d is not leap year",year);
    }*/

    //Printing next day 4 6 9 11
    /*int year, month, day;
    printf("Enter the day:\n");
    scanf("%d", &day);
    printf("Enter the month:\n");
    scanf("%d", &month);
    printf("Enter the year:\n");
    scanf("%d", &year);
    if (month == 2) {
        if (year % 4 == 0) {
            if (day == 29) {
                day = 1;
                month = 3;
            } else {
                day++;
            }
        } else if (day == 28) {
            day = 1;
            month = 3;
        } else {
            day += 1;
        }
    } else if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 30) {
        month++;
        day = 1;
    } else if (day == 31) {
        if (month == 12) {
            month = 1;
            year++;
            day = 1;
        } else {
            day = 1;
            month++;
        }
    } else {
        day++;
    }

    printf("%d . %d . %d\n", day, month, year);*/

    //Printing any number of asterisks

    /*printf("How many times do you want to print asterisks\n");
    int number;
    int count = 1;
    scanf("%d", &number);
    while (count <= number) {
        printf("*");
        count++;
    }*/

    //Printing power of number
    /*int number;
    int power;
    int countPower = 1;
    int result = 1;
    printf("Enter the number:\n");
    scanf("%d", &number);
    printf("Enter the power:\n");
    scanf("%d", &power);
    while (countPower <= power) {
        result *= number;
        countPower++;
    }
    printf("%d. power of %d is %d\n", power, number, result);*/

    //Average grade calculator

    /*int courses = 0;
    double grade = 0.0;
    double total = 0.0;
    while (grade != -1) {
        printf("Enter your grade (If your courses are run out, enter -1) :\n");
        scanf("%lf", &grade);
        if (grade != -1) {
            total += grade;
            courses++;
        }

    }
    printf("Your average grade is: %lf", total / courses);*/

    //Calculating power with for loop
    /*int number, pow;
    printf("Enter the number:\n");
    scanf("%d", &number);
    printf("Enter the power:\n");
    scanf("%d", &pow);
    int tempNumber = number;

    for (int i = 1; i < pow; i++) {
        number *= tempNumber;
    }
    printf("%d. power of %d is %d", pow, tempNumber, number);*/

    //Finding maximum value in array
    /*int digits[10] = {5, 3, 9, 6, 9, 7, 6, 2, 4, 4};
    int max = digits[0];
    for (int i = 1; i < 10; i++) {
        if (max < digits[i]) {
            max = digits[i];
        }
    }
    printf("The maximum number is %d",max);*/

    //Finding index of the max value in array
    /*int digits[10];
    int index;
    int max;

    for (int i = 0; i < 10; i++) {
        printf("Enter the number\n");
        scanf("%d", &digits[i]);
        if (i == 0) {
            max = digits[0];
        } else if (max < digits[i]) {
            max = digits[i];
            index = i;
        }
    }

    printf("The index of maximum number is %d", index);*/

    //Printing array in reverse order
    /*int pullUps[10];

    for(int i=0;i<10;i++){
        printf("Enter the number of pullups on the day %d\n",i+1);
        scanf("%d",&pullUps[i]);
    }

    for(int i=9;i>=0;i--){
        printf("%d days ago you did %d pullups\n",9-i,pullUps[i]);
    }*/


    return 0;
}
