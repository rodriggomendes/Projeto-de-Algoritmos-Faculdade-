//Rodrigo Farias Mendes
#include <stdio.h>
#include <stdlib.h>

main () {
	char nome[50];
	int idade;
	
	printf("Insira seu nome: ");
	scanf("%s", &nome);
	printf("Insira sua idade: ");
	scanf("%d", &idade);
	
	printf("%s cuja idade e %d, Jesus te ama!", nome, idade);
}
