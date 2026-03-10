#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício6. Escreva um programa que imprima os 10 primeiros números negativos.

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Os 10 primeiros números negativos são:\n");
	
	int i;
	for (i = -1; i >= -10; i--){
		printf("%d", i);
	}
	
	printf("\n");
}
