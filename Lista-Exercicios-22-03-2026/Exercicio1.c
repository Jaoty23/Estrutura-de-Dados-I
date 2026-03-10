#include <stdio.h>
#include <stdlib.h> //Biblioteca para dar o pause no windows.
#include <locale.h> //Biblioteca para usar a acentuação na impressão.

// Exercício1. Escreva um programa para escrever quando inicializado “Olá aluno hoje é sexta-feira”.

int main(){
	
	setlocale(LC_ALL, "Portuguese"); //Usa a localização do sistema operacional.
	
	printf("Olá aluno hoje é sexta-feira \n");
	
	system("pause");
}
