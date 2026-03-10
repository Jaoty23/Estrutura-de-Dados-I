#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio7. Dado um número verificar se ele é maior que 10.

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	
	printf("Digite o valor a ser verificado: \n");
	scanf("%d", &valor);
	
	if (valor > 10){
		printf("O numero %d é maior que 10.\n", valor);		
	}
	else {
		printf("O número %d é menor que 10.\n", valor);	
	}
	
	
	
	
}
