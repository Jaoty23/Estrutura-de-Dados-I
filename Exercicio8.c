#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio8. Dado um número verificar se ele é positivo ou negativo.

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	
	printf("Digite um valor: \n");
	scanf("%d", &valor);
	
	if (valor < 0){
		printf ("O valor %d é negativo.", valor);
	}
	else{
		printf ("O valor %d é positivo.", valor);
	}
}
