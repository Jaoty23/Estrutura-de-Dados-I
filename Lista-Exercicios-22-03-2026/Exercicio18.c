#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício18. Escreva um programa que imprima o seguinte vetor:
// 1  1  2  3  5  8  13  21  34  55  86  144  233  300  533

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetor[] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 86, 144, 233, 300, 533};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int i; 

    printf("Vetor:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

