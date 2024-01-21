#include <stdio.h>

float precoUnitario;
float paisDOrigem;
float meioDTransporte;
float cargaPerigosa;

float imposto;
float valorTransporte;
float seguro = 0;
float precoFinal;
float totalImpostos = 0;

int main(){

    do{
        printf("Informe o preco unitario: ");
        scanf("%f", &precoUnitario);
        printf("\n");

        if(precoUnitario <= 0){
            printf("Preco Invalido");
            break;
        }

        printf("Informe o pais de origem: \n");
        printf("1. USA\n");
        printf("2. Mexico\n");
        printf("3. outros\n");
        scanf("%f", &paisDOrigem);
        printf("\n");

        printf("Informe o Meio de transporte: \n");
        printf("1. Terrestre\n");
        printf("2. Fluvial\n");
        printf("3. Aereo\n");
        scanf("%f", &meioDTransporte);
        printf("\n");

        printf("A carga ser perigosa? (Y = 1 / N = 0)\n");
        scanf("%f", &cargaPerigosa);

        if(precoUnitario < 100){
            imposto = precoUnitario * (5/100);
        }else if(precoUnitario >= 100){
            imposto = precoUnitario * (10/100);
        }

        if(cargaPerigosa == 1){
            switch((int)meioDTransporte){
                case 1:
                    valorTransporte = 50;
                    break;
                case 2:
                    valorTransporte = 21;
                    break;
                case 3:
                    valorTransporte = 24;
                    break;
            }
        }else if (cargaPerigosa == 0){
            switch((int)meioDTransporte){
                case 1:
                    valorTransporte = 12;
                    break;
                case 2:
                    valorTransporte = 21;
                    break;
                case 3:
                    valorTransporte = 60;
                    break;
            }
        }

        if (paisDOrigem == 2 && meioDTransporte == 3){
            seguro = precoUnitario/2;
        }

        precoFinal = precoUnitario + imposto + valorTransporte + seguro;
        totalImpostos += imposto;

        printf("Valor Imposto: %.2f\n", imposto);
        printf("Valor Transporte: %.2f\n", valorTransporte);
        printf("Valor do Seguro: %.2f\n", seguro);
        printf("Preco final: %.2f\n", precoFinal);
        printf("Total dos impostos: %.2f\n", totalImpostos);


    }while(precoUnitario > 0);


}