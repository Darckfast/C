#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){

	float notaA, notaB;
	
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

return 0;
}
