#include <stdio.h>


int opcaoUsuario;
float salario;



int main(){

    printf("Escolha um CARGO para verificar seu AUMENTO SALARIAL: \n");
    printf("1. Escriturario\n");
    printf("2. Secretario\n");
    printf("3. Caixa\n");
    printf("4. Gerente\n");
    printf("5. Diretor\n");

    scanf("%d", &opcaoUsuario);
    printf("Digite seu salario");
    scanf("%f", &salario);
    printf("\n\n");

    switch(opcaoUsuario){
        case 1:
            printf("CARGO: Escritutario \n");
            printf("Valor do aumento: 50 por cento\n");
            printf("Salario pos-aumento: %f", salario + ( salario * 50/100));
            break;
        case 2:
            printf("CARGO: Secretario \n");
            printf("Valor do aumento: 20 por cento\n");
            printf("Salario pos-aumento: %f", salario + ( salario * 35/100));
            break;
        case 3:
            printf("CARGO: Caixa \n");
            printf("Valor do aumento: 20 por cento\n");
            printf("Salario pos-aumento: %f", salario + ( salario * 20/100));
            break;
        case 4:
            printf("CARGO: Gerente \n");
            printf("Valor do aumento: 10 por cento\n");
            printf("Salario pos-aumento: %f", salario + ( salario * 10/100));
            break;
        case 5:
            printf("CARGO: Diretor \n");
            printf("Valor do aumento: Sem aumento\n");
            break;
    }
}