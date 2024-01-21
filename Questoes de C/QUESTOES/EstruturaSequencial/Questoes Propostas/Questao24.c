#include <stdio.h>

float dinheiro;
float dolar;
float marcoAlemao;
float libraEsterlina;

int main(){
    dinheiro = 16.00;
    dolar = dinheiro / 1.80; //que sonho essa cotação de dolar
    marcoAlemao = dinheiro / 2.00;
    libraEsterlina = dinheiro / 3.57;

    printf("dinheiro em dolar: %.2f\n", dolar);
    printf("dinheiro em marcoAlemao: %.2f\n", marcoAlemao);
    printf("dinheiro em libraEsterlina: %.2f\n", libraEsterlina);
}