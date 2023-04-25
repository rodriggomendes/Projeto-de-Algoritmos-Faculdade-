//Rodrigo Farias Mendes
#include <stdio.h>
#include <stdlib.h>

main () {
	int numA, numB, numC;
	int soma, result;
	
	printf("Insira o primeiro numero: ");
	scanf("%d", &numA);
	printf("Insira o segundo numero: ");
	scanf("%d", &numB);
	printf("Insira o terceiro numero: ");
	scanf("%d", &numC);
	
	soma=numA+numB+numC;
	result=soma/3;
	
	printf("A media aritmetica e: %d", result);
}
