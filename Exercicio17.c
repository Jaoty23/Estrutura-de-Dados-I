#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício17. Escreva um programa que imprime todos os números primos positivos a partir do zero até um número digitado.

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int limite;
	int n;
	int primo;
	int i;
	
	printf("Digite um Número: \n");
	scanf("%d", &limite);
	
	for(n =2; n <= limite; n++){	
		primo = 1; //assume que o valor será primo.
		for(i = 2; i < n; i++){
			if(n % i == 0){
				primo = 0; // não é primo.
				break;
			}
		}
		if (primo) {
			printf("%d\n", n);
		}
	}
	
	
}
