//Rodrigo Farias Mendes
#include <stdio.h>
#include <stdlib.h>

main () {
	int cel, fah;
	
	printf("Informe a temperatura em grau celsius: ");
	scanf("%d", &cel);
	
	fah=cel*1.8+32;
	
	printf("A temperatura %d em grau fahrenheit e: %d", cel, fah);
}
