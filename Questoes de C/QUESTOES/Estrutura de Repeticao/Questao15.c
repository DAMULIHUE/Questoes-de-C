#include <stdio.h>



int main(){
    float precoUnitario;
    float refrigeracao;
    float categoria;

    float custoDeEstocagem;

    float imposto;

    float precoFinal;

    float produtosBaratos;
    float produtosNormais;
    float produtosCaros;

    float maiorPreco;
    float menorPreco;

    float adicional;

    float i;

    for (i = 0; i < 12; i++) {
        printf("Informe o preco unitario: ");
        scanf("%f", &precoUnitario);
        printf("\n");

        printf("O produto necessita de refrigeracao? (Y = 1 / N = 0): ");
        scanf("%f", &refrigeracao);
        printf("\n");

        printf("Informe a categoria do produto: \n");
        printf("1. Alimentacao\n");
        printf("2. Limpeza\n");
        printf("3. Vestuario\n");
        scanf("%f", &categoria);
        printf("\n");
        ///////////

        if (precoUnitario < 20){
            if (categoria == 1){
                custoDeEstocagem = 2.00;
            }else if (categoria == 2){
                custoDeEstocagem = 3.00;
            }else if (categoria == 3){
                custoDeEstocagem = 4.00;
            }
        }
        ////////////

        if (precoUnitario >= 20 && precoUnitario <= 50){
            if(refrigeracao == 1){
                custoDeEstocagem = 6;
            }else if(refrigeracao == 0){
                custoDeEstocagem = 0;
            }
        }
        ///////////

        if (precoUnitario > 50){
            if(refrigeracao == 1){
                if (categoria == 1){
                    custoDeEstocagem = 5;

                }else if(categoria == 2){
                    custoDeEstocagem = 2;

                }else if(categoria == 3){
                    custoDeEstocagem = 4;

                }
            }else if(refrigeracao == 0){
                if (categoria == 1 || categoria == 3){
                    custoDeEstocagem = 0;

                }else if(categoria == 2){
                    custoDeEstocagem = 1;

                }
            }
        }
        ///////////

        if(categoria == 1 && refrigeracao == 1){
            imposto = precoUnitario * 2/100;
        }else{
            imposto = precoUnitario * 4/100;
        }
        ///////////
        precoFinal = precoUnitario + custoDeEstocagem + imposto;

        if(precoFinal < 20){
            produtosBaratos++;
            printf("Barato\n\n");
        }else if(precoFinal >= 20 and precoFinal <= 100){
            produtosNormais++;
            printf("Normal\n\n");
        }else{
            produtosCaros++;
            printf("Caro\n\n");
        }

        adicional = custoDeEstocagem + imposto;

        if (i == 1){
            maiorPreco = precoFinal;
            menorPreco = precoFinal;
        }else{
            if (maiorPreco < precoFinal){
                maiorPreco = precoFinal;
            }
            if(menorPreco > precoFinal){
                menorPreco = precoFinal;
            }
        }
    }

    adicional / 12;

    printf("Adicional: %.2f\n", adicional);
    printf("maior Preco:%.2f\n", maiorPreco);
    printf("Menor Preco: %.2f\n", menorPreco);
    printf("Imposto sobre Preco Unitario: %.2f\n", imposto);
    printf("Produtos Baratos: %.2f\n", produtosBaratos);
    printf("Produtos Normais: %.2f\n", produtosNormais);
    printf("Produtos Caros: %.2f\n", produtosCaros);


}