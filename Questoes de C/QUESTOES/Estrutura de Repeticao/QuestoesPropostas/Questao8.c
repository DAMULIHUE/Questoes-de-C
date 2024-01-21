#include <stdio.h>

float idade, peso, altura, corOlhos, corCabelo;
int i;

float Maisde50Menosde60kg = 0;
float somaMediaIdadeMenos150 = 0, qntdIdades = 0, mediaIdade;
float qntdOlhosAzuis = 0, porcentagem;
float ruivoSemOlhoAzul = 0;

int main(){


    for(i = 0; i <= 6; i++){

        printf("DIGITE sua idade");
        scanf("%f", &idade);
        printf("\n");

        printf("DIGITE seu peso (em KG):");
        scanf("%f", &peso);
        printf("\n");

        printf("Digite sua altura (em M):");
        scanf("%f", &altura);
        printf("\n\n");

        printf("Informe a cor de seus olhos:\n");
        printf("1. Azul\n");
        printf("2. Preto\n");
        printf("3. Verde\n");
        printf("4. Castanho\n");
        scanf("%f", &corOlhos);
        printf("\n\n");

        printf("Informe a cor de seus cabelos:\n");
        printf("1. Preto\n");
        printf("2. Castanho\n");
        printf("3. Loiro\n");
        printf("4. Ruivo\n");
        scanf("%f", &corCabelo);
        printf("\n\n");

        if(peso < 60 && idade > 50){
            Maisde50Menosde60kg++;
        }

        if(altura < 1.50){
            somaMediaIdadeMenos150 += idade;
            qntdIdades++;
        }

        if(corOlhos == 1){
            qntdOlhosAzuis++;
        }

        if(corCabelo == 4 && corOlhos != 1){
            ruivoSemOlhoAzul++;
        }
    }

    mediaIdade = somaMediaIdadeMenos150 / qntdIdades;
    porcentagem = qntdOlhosAzuis * (6 / 100.0);

    printf("pessoas com idade superior a 50 anos e peso inferior a 60 kg: %f\n", Maisde50Menosde60kg);
    printf("média das idades das pessoas com altura inferior a 1,50m: %f\n", mediaIdade);
    printf("porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas: %f\n", porcentagem);
    printf("quantidade de pessoas ruivas e que não possuem olhos azuis: %f\n", ruivoSemOlhoAzul);

}