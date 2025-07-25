#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	const char USUSARIO[] = "Areli";
	const char PASS[] = "aagb2574";
	const int numIntentos = 3;
	int i;
	char usuario[50];
	char contrasena[50];
	
	for (i=0 ; i<numIntentos; i++){
		printf("Teclea usuario: ");
		scanf("%s",usuario);
		
		printf("Teclea el password: ");
		scanf("%s",contrasena);
		
		if( strcmp(PASS, contrasena) != 0 ){
			printf("\t Logeo incorrecto, intente de nuevo\n ");
			continue;
		}
		
		printf("\n*** Bienvenido al Sistema ***\n");
		break;
		
	}
	
	if (i == numIntentos){
		printf("\nPrograma no ejecutado...\n");
		return 1;
	}
	
	printf("\nPrograma ejecutando...\n");
	getch();
	return 0;
}
