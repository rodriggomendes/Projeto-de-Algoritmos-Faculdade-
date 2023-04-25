//Rodrigo Farias Mendes
#include <stdio.h>
#include <stdlib.h>

main () {
	int idade;
	
	printf("Insira sua idade: ");
	scanf("%d", &idade);
	
	if (idade>=18) {
		printf("Voce e maior de idade!");
	}
	else {
		printf("Voce e menor de idade!");
	}
}
