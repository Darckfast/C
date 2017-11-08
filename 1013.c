#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
	int a, min, max, cont;
	scanf("%i", &a);
	min = max = a;

	for(cont = 0; cont < 2; cont ++){
		scanf("%i", &a);
		if( max < a)
			max = a;
	}
	
	printf("%i eh o maior\n", max);
	
return 0;
}
