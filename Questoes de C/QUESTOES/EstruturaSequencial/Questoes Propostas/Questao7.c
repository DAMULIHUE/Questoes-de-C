#include <stdio.h>

float peso;

float emagrecimento;
float engordamento;

int main(){

    peso = 70;
    emagrecimento = peso * 15/100;
    engordamento = peso * 20/100;



    printf("Voce perdeu 20 por cento do peso ficando com: %f\n", peso - emagrecimento);
    printf("voce engordou 15 por centa ficando com: %f\n", peso + engordamento);
}