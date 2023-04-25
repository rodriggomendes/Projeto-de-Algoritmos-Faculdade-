//Rodrigo Farias Mendes
#include <stdio.h>
#include <stdlib.h>

main () {
	int numA, mult=1, i, result;
	
	printf("Insira um numero: ");
	scanf("%d", &numA);
	
	for (i=0; i<10; i++) {
		result=numA*mult;
		printf("%d * %d = %d \n", numA, mult, result);
		mult++;
	}
}
