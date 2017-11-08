#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (){

	int a= 1, b = 60;
	
	for(;b--;){

		printf("I=%d J=%d\n", a, b + 1);
		a += 3;
		b -= 4;
	}
	printf("I=%d J=0\n", a);
return 0;
}
