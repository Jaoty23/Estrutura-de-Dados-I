#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio15. Escreva um programa que imprima na tela o fatorial de um número recebido. Ex: 5! = 5x4x3x2x1 => 120

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	int i;
	int fatorial;
	
	printf("Ensira um número para receber seu fatorial: \n", n);
	scanf("%d", &n);
	
	for(i = n; i > 0 ; i--){
			
		fatorial *= i;
	}
	
	printf("%d! = %llu\n", n, fatorial);
	
}
