#include <stdio.h>

float hora;
float minutos;

float horaParaMin;
float totalMin;
float minParaSeg;
int main(){
    hora = 4;
    minutos = 30;

    horaParaMin = hora * 60;
    totalMin = horaParaMin + minutos;
    minParaSeg = totalMin * 60;

    printf("hora em minutos: %.2f\n", horaParaMin);
    printf("minutos totais: %.2f\n", totalMin);
    printf("minutos em segundos: %.2f\n", minParaSeg);
}
