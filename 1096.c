#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (){

	int a, b;
	
	for(b = 1;b < 10;b ++){

		for(a = 7; a > 4; a--){
			if( b % 2 != 0)
			printf("I=%d J=%d\n", b, a);	
		}
	}
return 0;
}
