#include <stdio.h>

float nota;


int main() {
    printf("Digite a NOTA DO ALUNO: ");
    scanf("%f", &nota);

    if (nota >= 7 || nota == 10){
        printf("Aprovado");
    }else if(nota >= 3 && nota < 7){
        printf("Exame");
    }else{
        printf("Reprovado");
    }
}