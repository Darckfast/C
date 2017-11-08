#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

#define BONUS 0.15

int main (){
	char d[10];
	float a, b;
	
	scanf("%s", &d);

	scanf("%f %f", &a, &b);
	
	printf("TOTAL = R$ %.2f\n", a + (b * BONUS));
	
return 0;
}
