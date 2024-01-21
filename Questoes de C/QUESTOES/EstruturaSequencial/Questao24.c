#import <stdio.h>
#import <math.h>

float hora;
float horaEmMin;
float minDaHora;

int main(){

    hora = 21.16;

    minDaHora = modff(hora, &horaEmMin);
    horaEmMin *= 60;
    minDaHora *= 100;


    printf("Hora em minutos: %.2f\n", horaEmMin + minDaHora);
}