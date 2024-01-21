#include <stdio.h>
double pe, jardas, milha, polegada;
double medidaEmP = 3;

double PeParaPolegada;
double PeParaJardas;
double PeParaMilhas;

int main() {
    polegada = 12;
    pe = polegada;
    jardas = pe * 3;
    milha = jardas * 1.760;

    PeParaPolegada = medidaEmP * polegada;
    PeParaJardas = medidaEmP * jardas;
    PeParaMilhas = medidaEmP * jardas * milha;

    printf("Medida escolhida para polegada: %f\n", PeParaPolegada);
    printf("Medida escolhida para jardas: %f\n", PeParaJardas);
    printf("Medida escolhida para milhas: %f\n", PeParaMilhas);
}