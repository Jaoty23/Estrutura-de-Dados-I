#include <stdio.h>
#include <stdlib.h> //Biblioteca para dar o pause no windows.
#include <locale.h> //Biblioteca para usar a acentuação na impressão.

// Exercício2. Dado a entrada via teclado do nome de usuário (seu nome) escrever na tela “Bem-vindo nome de usuário”

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	char nome[100];
	
	printf("Digite seu nome: ");
	scanf(" %[^\n]", nome);
	
	printf("Bem vindo %s\n", nome);

}
