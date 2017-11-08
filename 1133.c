#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){

	int aux,x, y;

	scanf("%d %d", &x, &y);
	if( y > x){
		aux = y;
		y = x;
		x = aux;
	}
	//x++;
	y++;
	while(x-y){
		if( y % 5 == 2 ||y % 5 == 3)	printf("%d\n", y);
	y++;
	}
return 0;
}
