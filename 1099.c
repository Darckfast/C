#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (){
	int a, b,n, cont, aux;
		
	scanf("%d", &n);
	
	for(;n--;){
		scanf("%d %d", &a, &b);
		if( a < b){
			aux = a;
			a = b;
			b = aux;
		}
		cont = 0;
		b++;		
		while((a - b)>0){
			if( a > b){
				a--;
				if( a % 2 != 0.0){
					cont += a;
				}
			}else a--;
		}
		printf("%d\n", cont);
	}
	return 0;
}
