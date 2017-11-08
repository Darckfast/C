#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (){
	int a, b,n, cont, aux;
	while(1){
		scanf("%d %d", &a, &b);
		if( a <= 0 || b <= 0) break;		
		if( a < b){
			aux = a;
			a = b;
			b = aux;
		}
		cont = 0;	
		while((a - b)>=0){
			printf("%d ", b);			
			cont += b;
			b++;	
		}
		printf("Sum=%d\n", cont);
	}
return 0;
}
