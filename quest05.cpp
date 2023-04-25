//Rodrigo Farias Mendes
#include <stdio.h>
#include <stdlib.h>

main () {
	int numA;
	
	printf("Insira um numero: ");
	scanf("%d", &numA);
	
	printf("O numero e %d, seu antecessor e %d e seu sucessor e %d", numA, numA-1, numA+1);
}
