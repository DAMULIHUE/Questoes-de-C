#include <stdio.h>

int opcoes;

int main(){

    do{

        printf("Menu de opcoes:\n");
        printf("1. Media Aritmetica\n");
        printf("2. media Ponderada\n");
        printf("3. Sair\n");
        scanf("%d",&opcoes);

        switch(opcoes) {
            case 1:
            {
                float num1, num2;
                float media;

                printf("Digite o numero 1: \n");
                scanf("%f", &num1);

                printf("Digite o numero 2: \n");
                scanf("%f", &num2);

                media = (num1 + num2) / 2;

                printf("Essa e a media: %.2f\n\n", media);
                opcoes = -1;
            }
                break;
            case 2:
            {
                float nota1, nota2, nota3;
                float peso1, peso2, peso3;

                float somaNotaPeso;
                float somaPeso;
                float mediaPonderada;


                printf("Digite 3 notas:");
                scanf("%f %f %f", &nota1, &nota2, &nota3);

                printf("Digite o peso das 3 notas");
                scanf("%f %f %f", &peso1, &peso2, &peso3);

                somaNotaPeso = nota1 * peso1 + nota2 * peso2 + nota3 * peso3;
                somaPeso = peso1 + peso2 + peso3;

                mediaPonderada = somaNotaPeso / somaPeso;

                printf("Essa e a sua media ponderada: %f\n\n", mediaPonderada);

                opcoes = -1;
            }
                break;
            case 3:

                break;
            default:
                printf("Voce Digitou um valor invalido\n\n");
                opcoes = -1;
                break;
        }
    }while(opcoes == -1);

    return 0;
}