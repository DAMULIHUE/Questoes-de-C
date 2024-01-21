#include <stdio.h>

float idadeNadador;

int main(){

    printf("DIGITE sua IDADE: ");
    scanf("%f", &idadeNadador);

    if (idadeNadador >= 5 && idadeNadador <= 7){
        printf("categoria: infantil");
    }else if (idadeNadador >= 8 && idadeNadador <= 10){
        printf("categoria: Juvenil");
    }else if (idadeNadador >= 11 && idadeNadador <= 15){
        printf("categoria: Adolescente");
    }else if (idadeNadador >= 16 && idadeNadador <= 30){
        printf("categoria: Adulto");
    }else if (idadeNadador > 30){
        printf("categoria: Senior");
    }else{
        printf("Idade Invalida");
    }
}