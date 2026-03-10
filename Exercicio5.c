#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício5. Dado de entrada dois valores numéricos fazer a subtração e apresentar ao usuário.

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int valor1;
	printf("Digite o primeiro valor: \n");
	scanf("%d", &valor1);
	
	int valor2;
	printf("Digite o segundo valor: \n");
	scanf("%d", &valor2);
	
	printf("A subtração é: %d\n", valor1 - valor2);
	
}
