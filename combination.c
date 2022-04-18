#include <stdio.h>
#include <math.h>
#include <stdlib.h>


//int factCalc(int n) {
    //int fact = 1;
    //if (n != 0) {
      //  for (int i = 1; i <= n; i++) {
        //    fact *= i;
        //}
    //}
    //return fact;

//}

/*int combCalc(int n, int r) {
    int comb = factCalc(n) / (factCalc(r) * factCalc(n - r));
    return comb;
}*/

/*int CombBetter(int n, int r) {
    int comb1;
    int ntemp = n;
    for (int i = 1; i < r; i++) {
        ntemp--;
        n = n * ntemp;
    }
    comb1 = n / factCalc(r);
    if (r == 0) {
        comb1 = 1;
    }
    return comb1;
}*/

/*int main() {

    int n = 0;
    int r = 0;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    int result = CombBetter(n, r);
    printf("%d\n", result);

    return EXIT_SUCCESS;
}*/



//
// Created by User on 31.03.2022.
//

