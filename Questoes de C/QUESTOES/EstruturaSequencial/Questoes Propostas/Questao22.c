#include <stdio.h>

float N;
float ND;

int main(){
    N = 8;
    ND = N * (N - 3)/2;

    printf("Diagonais = %f\n", ND);
}