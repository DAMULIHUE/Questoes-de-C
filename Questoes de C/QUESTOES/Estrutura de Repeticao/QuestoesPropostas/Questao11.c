#include <stdio.h>

float precoCarro;

float precoFinal, valorParcela, percentualDAcresimo;
int qntdDParcelas;
int avista;

int main(){

    printf("Insira o preco do carro:");
    scanf("%f", &precoCarro);

    printf("Escolhar a quantia desejada de parcelas: \n");
    printf("1. 6\n");
    printf("2. 12\n");
    printf("3. 18\n");
    printf("4. 24\n");
    printf("5. 30\n");
    printf("6. 36\n");
    printf("7. 42\n");
    printf("8. 48\n");
    printf("9. 54\n");
    printf("10. 60\n");
    scanf("%d", &qntdDParcelas);
    printf("\n\n");

    printf("O pagamento sera a vista? (Y = 1 / N = 0)\n");
    scanf("%d", &avista);

    switch(qntdDParcelas){
        case 1:
            percentualDAcresimo = 3/100.0;
            break;
        case 2:
            percentualDAcresimo = 6/100.0;
            break;
        case 3:
            percentualDAcresimo = 9/100.0;
            break;
        case 4:
            percentualDAcresimo = 12/100.0;
            break;
        case 5:
            percentualDAcresimo = 15/100.0;
            break;
        case 6:
            percentualDAcresimo = 18 /100.0;
            break;
        case 7:
            percentualDAcresimo = 21/100.0;
            break;
        case 8:
            percentualDAcresimo = 24/100.0;
            break;
        case 9:
            percentualDAcresimo = 27/100.0;
            break;
        case 10:
            percentualDAcresimo = 30/100.0;
            break;
    }

    precoFinal = precoCarro + (precoCarro * percentualDAcresimo);

    if(avista == 1){
        precoFinal - (precoFinal * 20/100);
    }

    printf("Preco Final: %.2f", precoFinal);
}