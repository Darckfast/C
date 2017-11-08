#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){

	int num , y, x, aux;
	float a=1.0;

	scanf("%d %d", &x, &y);	
	aux = x;
	while(y > 0){
		for(;x--;){
			printf("%.0f", a);
			a++;
			if(x >= 1) printf(" ");
		}
		x = aux;
		printf("\n");	
		y -= x;	
	}
return 0;
}
