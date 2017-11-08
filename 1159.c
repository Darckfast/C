#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main(){

	int a, x,y = 5,soma=0;
	
	while(scanf("%d", &a) * a){
		while(y){
			if((a%2)==0){
				y--;
				soma+=a;
			}
			a++;
		}
		printf("%d\n", soma);
		soma = 0;	
		y = 5;	
	}
return 0;
}
