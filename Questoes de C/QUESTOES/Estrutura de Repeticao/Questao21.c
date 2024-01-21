#include <stdio.h>

float soma = 0;
float num;
float numDigitados;
float mediaNumerosDigitados;
float maiorNum;
float menorNum;
float numerosPares;
float numerosImpares;
float mediaNumerosPares;
float mediaNumerosImpares;
float somaPar;
float somaImpar;
float porcentagemNumeroImpar;

int main(){

    for(float i = 1; i != 30000; i++){

        printf("Digite um numero: ");
        scanf("%f", &num);
        printf("\n");

        soma += num;

        ////////

        printf("Numeros digitados: %.2f\n", i);

        ////////

        mediaNumerosDigitados = soma / i;

        ////////

        if (i == 1){
            maiorNum = num;
            menorNum = num;

        }else{
            if (maiorNum < num ){ maiorNum = num; }
            if(menorNum > num){ menorNum = num; }
        }

        ////////

        if((int)num % 2 == 0){
            numerosPares++;
            somaPar += num;
        }else{
            numerosImpares++;
            somaImpar += num;
        }

        ////////

        mediaNumerosImpares = somaImpar / numerosImpares;
        mediaNumerosPares = somaPar / numerosPares;

        ////////

        porcentagemNumeroImpar = (numerosImpares / i) * 100;

        ////////

        printf("Numero digitado: %.2f\n", num);
        printf("Soma: %.2f\n", soma);
        printf("Media dos numeros digitados: %.2f\n", mediaNumerosDigitados);
        printf("media dos numeros pares: %.2f\n", mediaNumerosPares);
        printf("media dos numeros impares: %.2f\n", mediaNumerosImpares);
        printf("porcentagem de numeros impares nos numeros digitados: %.2f\n", porcentagemNumeroImpar);
    }
}
