#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio9. Dados dois números diferentes dividir o maior pelo menor valor.

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int valor1;
	printf("Valor1:\n", valor1);
	scanf("%d", &valor1);
	
	int valor2;
	printf("Valor2:\n", valor2);
	scanf("%d", &valor2);
	
	int resultado;
	
	if(valor1 > valor2){
		resultado = valor1 / valor2;
		printf("O valor da divisão é: %d\n", valor1 / valor2);
	}
	else{
		resultado = valor2 / valor1;
		printf("O valor da divisão é: %d\n", valor2 / valor1);
	}
}
