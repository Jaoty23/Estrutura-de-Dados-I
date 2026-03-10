#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício16. Escreva um programa que dado um número, ele diz se é um número primo ou não.

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	int i;
	
	printf("Insira um valor: \n", n);
	scanf("%d", &n);
	
	if(n <= 1){
		printf("%d Não é primo. \n", n);
	}
	else{
		for(i = 2; i < n; i++) 	{
			
			if (n % i == 0) {
                printf("%d não é primo.\n", n);
                return 0;
		  	}
		}
		printf("%d é primo. \n", n);
	}
}
