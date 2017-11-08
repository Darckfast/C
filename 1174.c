#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	float x[100],num;
	int i = 0;
			
	Inicio:
	while(i != 100){
		scanf("%f", &x[i]);	
		if( 10.0 >= x[i] ) {
			printf("A[%d] = %.1f\n",i, x[i]);		
			i++;
		}

		else{
			i++;			
			goto Inicio;
		}	
	}
	
return 0;
}
