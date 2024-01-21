#include <stdio.h>
#include <math.h>

#define pi 3.14159

float EscadaAng;
float parede;


int main(){

    EscadaAng = (30* pi) / 180;
    parede = 2;

    float CompEscada = parede / sin(EscadaAng);

    printf("Tamanho da Escada: %.2f", CompEscada);
}