#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício10. Dado a formula Y = X + 5 escrever o valor de Y quando dado uma entrada de X.

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	printf("Dada a fórmula Y = x + 5, Escreva o valor de X: \n", x);
	scanf("%d", &x);
	
	int valor2 = 5;
	
	printf("Y = %d\n", x + 5);
}
