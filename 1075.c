#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
	
	int n, cont = 0;

	scanf("%d", &n);

	while(cont < 10000){

		if( cont % n == 2)	printf("%d\n", cont);
		cont++;
	}

return 0;
}
