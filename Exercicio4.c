#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício4. Dado de entrada um valor lógico escrever na tela “O valor oposto é: valor lógico”

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int valor = 0;
	
	printf("Digite um valor lógico (0 falso, 1 verdadeiro): ");
	scanf("%d", &valor);
	
	int Oposto = !valor;
	
	printf("O valor digitado foi: %d\n", valor);
	
	printf("O valor oposto é: %d\n", Oposto);

	
}
