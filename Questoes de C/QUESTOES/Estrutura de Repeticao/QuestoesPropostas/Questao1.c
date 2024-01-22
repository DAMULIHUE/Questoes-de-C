#include <stdio.h>

float grupoDec[4], grupoCre[4], grupos[4];
float *grupoPtrs[4]; // Array de ponteiros para os grupos
char *grupoNomes[4] = {"A", "B", "C", "D"}; // Array de nomes dos grupos

void OrdemCrescente(float * grupoCre, int contagemI, int i){
    float temp;

    while (contagemI != 0) {
        if (grupoCre[i] < grupoCre[i - contagemI]) {
            temp = grupoCre[i];
            grupoCre[i] = grupoCre[i - contagemI];
            grupoCre[i - contagemI] = temp;
        } else {
            contagemI--;
        }
    }
}

void OrdemDecrescente(float * grupoDec, int contagemI, int i){
    float temp;

    while (contagemI != 0) {
        if (grupoDec[i] > grupoDec[i - contagemI]) {
            temp = grupoDec[i];
            grupoDec[i] = grupoDec[i - contagemI];
            grupoDec[i - contagemI] = temp;
        } else {
            contagemI--;
        }
    }


}

void Questao1(float * grupo, char * conjunto){
    int i, contagemI;

    for(i = 0; i != 4; i++) {
        printf("Digite o %d valor do grupo %s: ", i + 1, conjunto);
        scanf("%f", &grupo[i]);

        contagemI = i;

        grupoCre[i] = grupo[i];
        grupoDec[i] = grupo[i];

        OrdemCrescente(grupoCre, 4, contagemI, i);
        printf("Valor do grupo %s (crescente): %.2f, %.2f, %.2f, %.2f\n", conjunto, grupoCre[0], grupoCre[1], grupoCre[2], grupoCre[3]);

        OrdemDecrescente(grupoDec, 4, contagemI, i);
        printf("Valor do grupo %s (decrescente): %.2f, %.2f, %.2f, %.2f\n\n", conjunto, grupoDec[0], grupoDec[1], grupoDec[2], grupoDec[3]);
    }



}


int main(){

    float A[4];
    Questao1(A, "A");
    grupoPtrs[0] = A; // Adicione o ponteiro para o array de ponteiros

    float B[4];
    Questao1(B, "B");
    grupoPtrs[1] = B; // Adicione o ponteiro para o array de ponteiros

    float C[4];
    Questao1(C, "C");
    grupoPtrs[2] = C; // Adicione o ponteiro para o array de ponteiros

    float D[4];
    Questao1(D, "D");
    grupoPtrs[3] = D; // Adicione o ponteiro para o array de ponteiros

    float temp;
    int i;
    int contagemI;

    for(i = 0; i != 4; i++) {
        contagemI = i;

        while (contagemI != 0) {
            if (grupos[i] < grupos[i - contagemI]) {
                temp = grupos[i];
                grupos[i] = grupos[i - contagemI];
                grupos[i - contagemI] = temp;
            } else {
                contagemI--;
            }
        }
    }

    for(int i = 0; i < 4; i++) {
        for(int j = i + 1; j < 4; j++) {
            if(grupoPtrs[i][0] > grupoPtrs[j][0]) {
                float *tempPtr = grupoPtrs[i];
                grupoPtrs[i] = grupoPtrs[j];
                grupoPtrs[j] = tempPtr;

                char *tempNome = grupoNomes[i];
                grupoNomes[i] = grupoNomes[j];
                grupoNomes[j] = tempNome;
            }
        }
    }

    for(i = 0; i < 4; i++) {
        printf("Grupo %s: %.2f, %.2f, %.2f, %.2f\n", grupoNomes[i], grupoPtrs[i][0], grupoPtrs[i][1], grupoPtrs[i][2], grupoPtrs[i][3]);
    }

    return 0;
}
