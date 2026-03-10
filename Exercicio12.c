#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio12. Dado a formula A/5 = B/(A+2) calcular o valor de B dado uma entrada de A.

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int A;
	printf("Dada a fórmula A/5 = B/(A+2), Insira o valor de A: \n", A);
	scanf("%d", &A);
	
	int parte1 = A/5;
	
	int parte2 = A+2;
	
	int resultado = parte1*parte2;
	printf("O valor de B é:  %d\n", resultado); 
	
	
	
}
