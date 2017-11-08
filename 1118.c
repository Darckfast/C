#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){

	float notaA, notaB;
	int ncalc;
	Inicio:
	while(1){
		scanf("%f", &notaA);
		CaseTest: 
		if(notaA < 0 || notaA > 10){
			printf("nota invalida\n");			
			scanf("%f", &notaA);
			goto CaseTest;
		}
		scanf("%f",&notaB);
		CaseTest2:
		if(notaB < 0 || notaB > 10){
			printf("nota invalida\n");
			scanf("%f", &notaB);
			goto CaseTest2;
		}
		else break;		
	}
	printf("media = %.2f\n", (notaA + notaB)/ 2);
	nCalc:
	printf("novo calculo (1-sim 2-nao)\n");
	scanf("%d", &ncalc);
	
	switch(ncalc){
		case 1:
			goto Inicio;
			break;
		case 2:
			break;
		default:
			goto nCalc;
			break;
	}
return 0;
}
