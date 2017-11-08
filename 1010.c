#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

#define BONUS 0.15

int main (){
	int c, d, i = 2;
	float a, sum = 0;
	while(i >0){
		scanf("%i %i %f", &c, &d, &a);
		i--;
		sum += d * a;}
	printf("VALOR A PAGAR: R$ %.2f\n", sum );
	
return 0;
}
