#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main(){

	int a, x,y,soma=0;
	
	scanf("%d", &a);
	for(;a--;){
		scanf("%d %d", &x,&y);
		while(y){
			if((x%2)!=0){
				y--;
				soma+=x;
			}
			x++;
		}
		printf("%d\n", soma);
		soma = 0;	
	}
return 0;
}
