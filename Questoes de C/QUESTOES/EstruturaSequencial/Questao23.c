#include <stdio.h>
#include <math.h>

double num;
double numFrac;
double numInt;

int main(){

    num = 6.9;

    numFrac = modf(num, &numInt);

    printf("parte inteira = %.0f\n", numInt);
    printf("parte fracionaria = %.2f\n", numFrac);
    printf("arrendondando o numero: %0.f\n", round(num));
}