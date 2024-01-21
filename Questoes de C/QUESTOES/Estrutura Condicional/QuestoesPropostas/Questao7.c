#include <stdio.h>

float salario;
float aumento;


int main() {
    printf("Digite seu SALARIO: ");
    scanf("%f", &salario);

    aumento = salario * 30/100;

    if (salario < 500.00){
        printf("Seu novo salario: %.2f", salario + aumento);
    }else{
        printf("voce nao vai ganhar aumento.");
    }

}