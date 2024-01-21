#include <stdio.h>

float preco;
float novoPreco;
float desconto;
float codigo;



int main() {
    printf("DIGITE preco do produto: ");
    scanf("%f", &preco);

    printf("DIGITE o CODIGO DO PRODUTO:");
    scanf("%f", &codigo);
    printf("\n\n");

    if(preco < 30){
        printf("Sem desconto");

    }else if(preco >= 30 && preco <= 100){
        desconto = (preco * 10/100);

    }else{
        desconto = (preco * 10/100);

    }

    novoPreco = preco - desconto;
    printf("Valor do desconto: %.2f\n", desconto);
    printf("Valor do produto com desconto aplicado: %.2f", novoPreco);

}