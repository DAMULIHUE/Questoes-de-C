#include <stdio.h>


int opcaoUsuario;
float salario;

int main(){

    printf("Escolha uma opcao: \n");
    printf("1. IMPOSTO\n");
    printf("2. NOVO SALARIO\n");
    printf("3. CLASSIFICACAO\n");

    scanf("%d", &opcaoUsuario);

    switch (opcaoUsuario) {
        case 1:
            printf("Digite seu Salario:");
            scanf("%f", &salario);

            if (salario < 500){
                printf("IMPOSTO: %.2f", salario * 5/100);
            }else if (salario == 500.00 || salario <= 850.00){
        printf("IMPOSTO: %.2f", salario * 10/100);
    }else if (salario > 850){
        printf("IMPOSTO: %.2f", salario * 15/100);
    }

            break;
        case 2:
            printf("Digite seu Salario:");
            scanf("%f", &salario);

            if (salario < 450){
                printf("Aumento de 100 conto");
            }else if (salario >= 450 || salario == 750){
        printf("Aumento de 75 conto");
    }else if (salario == 750.00 || salario <= 1500.00){
        printf("Aumento de 50 conto");
    }else if (salario > 1500){
        printf("Aumento de 25 conto");
    }

            break;

        case 3:
            printf("Digite seu Salario:");
            scanf("%f", &salario);

            if (salario >= 700){
                printf("mal remunerado");
            }else if (salario > 750){
                printf("bem remunerado");
            }

            break;
        default:
            break;
    }
}