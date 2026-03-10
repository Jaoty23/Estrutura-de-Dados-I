#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercicio11. Dado a formula media = n1+n2+n3/3 escrever o valor do resultado ao usuário quando ele digitar o valor de n1, n2 e n3.

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1;
	printf("Escreva o valor de n1: \n", n1);
	scanf("%d", &n1);
	
	int n2;
	printf("Escreva o valor de n2: \n", n2);
	scanf("%d", &n2);
	
	int n3;
	printf("Escreva o valor de n3: \n", n3);
	scanf("%d", &n3);
	
	int media = n1 + n2 + n3;
	printf("O valor da média n1+n2+n3/3 é igual á: %d\n", media/3 );
	
}
