#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){

	int num;
	float a=1.0;

	scanf("%d", &num);
	for(;num--;){
		printf("%.0f %.0f %.0f\n", a, pow(a,2) ,pow(a,3));
		a++;
	}
return 0;
}
