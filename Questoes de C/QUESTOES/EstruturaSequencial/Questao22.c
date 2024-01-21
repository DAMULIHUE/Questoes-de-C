#include <stdio.h>

float quilowattsConsumidos;
float salarioMinimo;

float custoQuilowatts;
float valorQuilowatt;
float custoComDesconto;
float desconto;


int main(){
    quilowattsConsumidos = 2;
    salarioMinimo = 1100;

    custoQuilowatts = quilowattsConsumidos * (salarioMinimo/5);
    valorQuilowatt = salarioMinimo/5;

    desconto = custoQuilowatts * 0.15;
    custoComDesconto = custoQuilowatts - desconto;

    printf("O custo do quilowatt (por unidade): %.0f\n", valorQuilowatt);
    printf("Custo dos quilowatts: %.2f\n", custoQuilowatts);
    printf("O seu desconto de 15 porcento altera o valor final para: %.2f\n", custoComDesconto);


    return 0;
}