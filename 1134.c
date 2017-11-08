#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){

	int type, al=0, gas=0, die=0;
	Inicio:
	scanf("%d", &type);
	switch(type){
		case 1:
			al++;
			goto Inicio;
			break;
		case 2:
			gas++;
			goto Inicio;
			break;
		case 3:	
			die++;
			goto Inicio;	
			break;
		case 4:
			goto END;
			break;
		default:
			goto Inicio;
	

	}END:
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", al, gas, die);
return 0;
}
