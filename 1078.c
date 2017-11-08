#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
	
	int n, cont = 1;

	scanf("%d", &n);

	while(cont < 11){

		printf("%d x %d = %d\n", cont, n, (n *cont));
		cont++;
	}

return 0;
}
