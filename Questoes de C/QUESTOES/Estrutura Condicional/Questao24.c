#include <stdio.h>

int tipo;
float preco;
float imposto;
int refrigeracao;

float valAdd;

float precoComImposto;
float precoComDesconto;
float desconto;

int main(){
    //RECEBE PRECO
    printf("Informe o preco do produto:");
    scanf("%f", &preco);
    printf("\n\n");

    //RECEBE TIPO PRODUTO
    printf("Escolha um TIPO do produto: \n");
    printf("1 - Alimentacao\n");
    printf("2 - Limpeza\n");
    printf("3 - Vestuario\n");
    scanf("%d", &tipo);
    printf("\n\n");

    //INFORMA SE NECESSITA DE REFRIGERACAO
    printf("Precissa de refrigeracao?(Y = 1/N = 0)\n");
    scanf("%d", &refrigeracao);
    printf("\n\n");


    //VALOR ADICIONAL
    if (refrigeracao == 0){// sem refrigeracao
        switch(tipo){
            case 1://alimetacao
                if (preco < 15.00){
                    valAdd = 2.00;
                }else if(preco >= 15){
                    valAdd = 5.00;
                }
                break;
            case 2://limpeza
                if(preco < 10){
                    valAdd = 1.50;
                }else if(preco >= 10){
                    valAdd = 2.50;
                }
                break;
            case 3://vestuario
                if(preco < 30){
                    valAdd = 3.00;
                }else if(preco >= 30) {
                    valAdd = 2.50;
                }
        }
    }else{//com refrigeracao
        if(tipo == 1 ){//tipo1 = alimentacao
            valAdd = 8;
        }
    }
    //APOS RECEBER O VALOR ADICIONAL, SOMA-SE AO PRECO DO PRODUTO
    preco += valAdd;

    //VALOR DO IMPOSTO
    if (preco < 25){
        imposto = preco * 5/100;

    }else if (preco >= 25){
        imposto = preco * 8/100;

    }

    //APLICANDO IMPOSTO
    preco += imposto;

    //APLICANDO DESCONTO
    if (tipo != 1 && refrigeracao != 1){
        desconto = preco * 3/100;
    }
    precoComDesconto = (preco - desconto);

    //mostrando preco final (com impostos e valAdd)
    printf("o produto custa (impostos + valor adicional): %.2f\n", preco);

    //Classificacao do produto
    if (preco <= 50){
        printf("o produto esta com preco barato");
    }else if (preco == 50 || preco < 100){
        printf("o produto esta com preco normal");
    }else if(preco >= 100){
        printf("o produto esta com preco caro");
    }

}