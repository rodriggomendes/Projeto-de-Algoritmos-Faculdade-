//Rodrigo Farias Mendes
#include <stdio.h>
#include <stdlib.h>

main () {
	int num;
	
	printf("Insira um numero: ");
	scanf("%d", &num);
	
	if(num%2==0) {
		printf("O numero inserido e PAR.");
	}
	else {
		printf("O numero inserido e IMPAR.");
	}
}
