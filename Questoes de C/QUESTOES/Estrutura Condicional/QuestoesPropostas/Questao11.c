#include <stdio.h>

float preco;
float novoPreco;



int main() {
    printf("DIGITE preco do produto: ");
    scanf("%f", &preco);


    if (preco > 100){
        printf("preco com percentual de aumento: %.2f\n\n", novoPreco = preco + (preco * 15/100));
    }else if(preco == 50 || preco <= 100){
        printf("preco com percentual de aumento: %.2f\n\n", novoPreco = preco + (preco * 10/100));
    }else{
        printf("preco com percentual de aumento: %.2f\n\n", novoPreco = preco +  (preco * 5/100));
    }

    if(novoPreco < 80){
        printf("o preco esta: barato");
    }else if(novoPreco >= 80 && novoPreco < 120){
        printf("o preco esta: normal");
    }else if(novoPreco >= 120 && novoPreco <= 200){
        printf("o preco esta: caro");
    }else{
        printf("o preco esta: muito caro");
    }



}