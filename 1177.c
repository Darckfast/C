#include <stdlib.h>	
#include <stdio.h>
#include <math.h>
#include <string.h>
 
int main(){

	int i, cont, fim = 0;
	scanf("%d", &i);
	while(fim < 1000){
		cont = 0;
		while(cont < i){
			printf("N[%d] = %d\n", fim , cont);			
			cont++;	
			fim++;	
			if(fim == 1000) break;
		}
	}
return 0;
}

