#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

#define PI 3.14159

int main (){
	int c;
	double vol;
	scanf("%d", &c);
	vol = (4.0/3) * PI * pow(c, 3);
	printf("VOLUME = %.3f\n", vol );
	
return 0;
}
