#import <stdio.h>
#import <math.h>

float custoEspetaculo = 100.00;
float convite = 15.99;
float Estimativa;

int main(){

    Estimativa = round(custoEspetaculo / convite);

    printf("ingressos a serem vendidos: %.0f\n", Estimativa);
}

