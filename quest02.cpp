//Rodrigo Farias Mendes
#include <stdio.h>
#include <stdlib.h>

main () {
	float raio, calc;
	
	printf("Informe o raio do circulo: ");
	scanf("%f", &raio);
	
	calc=3.14*(raio*raio);
	
	printf("A area do circulo e: %f", calc);
}
