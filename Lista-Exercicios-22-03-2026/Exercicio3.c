#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício 3. Dado de entrada um numeral escrever na tela “O número digitado foi: numeral”.

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numeral;
	
	printf("Digite um número: ");
	scanf(" %d[^\n]", &numeral);
	
	printf("O número digitado foi:  %d\n", numeral);
	
	return 0;
}

