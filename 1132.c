#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){

	int sum = 0, x, aux,y;

	scanf("%d %d", &x, &y);
	if( y > x){
		aux = y;
		y = x;
		x = aux;
	}
	x++;
	while(x-y){
		if( y % 13 != 0)	sum+= y;
	//printf("%d %d %d\n", sum, x ,y);
	y++;
	}
	printf("%d\n", sum);
return 0;
}
