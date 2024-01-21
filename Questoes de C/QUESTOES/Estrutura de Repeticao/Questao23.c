#include <stdio.h>

float salario = 1100;
float valorQuilowatt;
float qntdQuilowatts = 0;
float consumo;
float valorPConsumidor = 0;
float acrescimo;
float total;
float ganhoEmpresa = 0;
float consumidores5001000 = 0;

int main(){

    valorQuilowatt = salario / 8;

    while (qntdQuilowatts != 0){

        printf("informe a quantia de quilowatts consumida: ");
        scanf("%f", &qntdQuilowatts);
        printf("\n");

        printf("informe qual o tipo do consumo:\n");
        printf("1. residencial\n");
        printf("2. comercial\n");
        printf("3. industrial\n");
        scanf("%f", &consumo);
        printf("\n");

        total = qntdQuilowatts * valorQuilowatt;

        if (consumo == 1) { acrescimo = total * 0.05; }
        if (consumo == 2) { acrescimo = total * 0.10; }
        if (consumo == 3) { acrescimo = total * 0.15; }

        printf("valor do quilowatt gasto: %.2f\n", valorQuilowatt);

        ganhoEmpresa += total + acrescimo;

        if(total >= 500 && total <= 1000){
            consumidores5001000++;
        }

        valorPConsumidor += ganhoEmpresa;

        printf("Valor de cada quilowatt :%.2f\n", valorQuilowatt);
        printf("Valor acrescimo: %.2f\n", acrescimo);
        printf("Total: %.2f\n", total);
    }

    printf("Valor por consumidor: %.2f\n", valorPConsumidor);
    printf("Faturamento da empresa: %.2f\n", ganhoEmpresa);
}