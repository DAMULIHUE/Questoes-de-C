#include <stdio.h>


int opcaoUsuario;
int codigoProduto;
float imposto;
float pesoProduto;
float precoGrama;
float valTotal;



int main() {

    printf("Escolha um codigo de PAIS DE ORIGEM: \n");
    printf("1.\n");
    printf("2.\n");
    printf("3.\n");

    scanf("%d", &opcaoUsuario);

    printf("Escolha um CODIGO DE PRODUTO (Entre 1 e 10):\n");
    scanf("%d", &codigoProduto);
    printf("\n");

    printf("Escolha o PESO do PRODUTO:\n");
    scanf("%f", &pesoProduto);
    printf("\n\n");
    pesoProduto *= 1000; //convertendo o quilo em grama.

    switch (opcaoUsuario) {//calculando imposto
        case 1:
            printf("imposto = %f\n\n", imposto = 0);
            break;
        case 2:
            printf("imposto = %f\n\n", imposto = 15);
            break;
        case 3:
            printf("imposto = %f\n\n", imposto = 25);
            break;
    }

    if (codigoProduto == 1 ||
    codigoProduto <= 4){
        precoGrama = 10;
    }else if (codigoProduto == 5 ||
    codigoProduto <= 7){
        precoGrama = 25;
    }else if (codigoProduto == 8 ||
    codigoProduto <= 10){
        precoGrama = 35;
    }

    valTotal = pesoProduto * precoGrama;

    printf("peso do produto em gramas: %f\n\n", pesoProduto);
    printf("preco total (sem impostos): %.2f\n", valTotal);
    printf("preco total (com impostos): %.2f\n", valTotal + (valTotal * imposto / 100));


}