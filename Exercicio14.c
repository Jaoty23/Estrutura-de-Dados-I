#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício14. Escreva um programa que dado o primeiro número e a razão de uma sequência, imprima seus dez primeiros termos: você não precisa necessariamente imprimir no final.

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int v1;	
	int r;
	int termo;
	int i;
	
	printf("Escreva o primeiro valor: \n");
	scanf("%d", &v1);
	
	printf("Escreva a razão: \n");
	scanf("%d", &r);
	
	
	for (i = 0; i < 10; i++) {
		
		termo = v1 + i * r;
		printf("%d\n", termo);
	}
	
}
