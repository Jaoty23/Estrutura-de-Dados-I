#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio13. Escreva um programa que dados 15 números, imprima seus quadrados, obs: você não precisa necessariamente imprimir no final.

	
int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int numeros[15];
    int i;

    for (i = 0; i < 15; i++) {	
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);

        printf("O quadrado de %d é %d\n", numeros[i], numeros[i] * numeros[i]);
    }

}

	
