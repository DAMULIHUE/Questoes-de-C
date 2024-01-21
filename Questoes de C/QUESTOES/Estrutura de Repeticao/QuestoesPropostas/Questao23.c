#include <stdio.h>

int opcoes;

int main(){

    do{

        printf("Menu de opcoes:\n");
        printf("1. Novo Salario\n");
        printf("2. Ferias\n");
        printf("3. Decimo Terceiro\n");
        printf("4. Sair\n");
        scanf("%d",&opcoes);

        switch(opcoes) {
            case 1:
            {
                float salario;
                float porcentagem;
                float novoSalario;

                printf("DIGITE seu salario: ");
                scanf("%f", &salario);

                if(salario < 210){ porcentagem = salario * (15/100.0); }
                else if(salario >= 210 && salario < 600){ porcentagem = salario * (10/100.0); }
                else if(salario >= 600){ porcentagem = salario * (5/100.0); }

                novoSalario = salario + porcentagem;
                printf("Novo salario: %f", novoSalario);
                printf("\n\n");
                opcoes = -1;
            }
                break;
            case 2:
            {
                float salario;
                float valorFerias;

                printf("DIGITE seu salario: ");
                scanf("%f", &salario);

                valorFerias = salario + (salario / 3);

                printf("Este e o valor das suas ferias: %.2f\n\n", valorFerias);
                opcoes = -1;
            }
                break;
            case 3:
            {
                float salario;
                float mesesTrabalhoNoAno;
                float decimoTerceiro;

                printf("DIGITE seu salario: ");
                scanf("%f", &salario);
                printf("\n");

                printf("DIGITE a quantos meses vc trabalha na empresa por ano: ");
                scanf("%f", &mesesTrabalhoNoAno);

                decimoTerceiro = (salario * mesesTrabalhoNoAno) / 12;
                printf("Seu decimo Terceiro: %.2f\n\n", decimoTerceiro);
                opcoes = -1;
            }
                break;
            case 4:

                break;
            default:
                printf("Voce Digitou um valor invalido\n\n");
                opcoes = -1;
                break;
        }
    }while(opcoes == -1);

    return 0;
}