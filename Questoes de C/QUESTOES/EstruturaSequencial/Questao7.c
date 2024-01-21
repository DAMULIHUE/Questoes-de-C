#include <stdio.h>

float salario = 1100;
float imposto;
float gratificacao;

float salarioFinal;

int main() {
    gratificacao = 50;
    imposto = salario * 0.10;

    salarioFinal = salario + gratificacao - imposto;

    printf("O salario sera: %.0f\n", salarioFinal);

    return 0;
}