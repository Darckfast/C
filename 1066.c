#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
	
int main (){
	int i,cont = 0, par = 0, impar = 0, pos = 0, neg = 0;
	while(cont < 5){
		scanf("%d", &i);
		if( i %2 == 0.0){
			par++;
		}else{	impar++;}

		if( i > 0) pos++;

		else if (i <0) neg++;
				
		cont++;
	}
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, pos, neg);
return 0;
}
