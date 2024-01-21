#include <stdio.h>

float nCriancas;
float sexo;

float totMasc;
float totFem;
float tot24;

float porcMasc;
float porcFem;
float porc24;

float tempoDeVida;

int main(){

    printf("DIGITE o numero de criancas nascidas no periodo:");
    scanf("%f", &nCriancas);
    printf("\n");

    for (int i = 1; i != nCriancas; i++){

        printf("Informe o SEXO da crianca:\n");
        printf("1. MASCULINO\n");
        printf("2. FEMININO\n");
        scanf("%f", &sexo);

        printf("Informe o TEMPO DE VIDA (em meses) da %d crianca\n\n", i);
        scanf("%f", &tempoDeVida);


        if (sexo == 1) {
            totMasc++;
        }else if (sexo == 2){
            totFem++;
        }else{
            printf("sexo invalido");
        }

        if (tempoDeVida <= 24){
            tot24++;
        }
    }

    porcFem = totFem + (totFem * 100/nCriancas);
    porcMasc = totMasc + (totMasc * 100/nCriancas);
    porc24 = tot24 + (tot24 * 100/nCriancas);

    printf("percentual de criancas mortas do sexo feminino: %.2f\n", porcFem);
    printf("percentual de criancas mortas do sexo masculino: %.2f\n", porcMasc);
    printf("percentual de criancas mortas com 24 meses ou menos: %.2f\n", porc24);

}

