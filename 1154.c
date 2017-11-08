#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
	float a,b = 0, count = 0;
	
	while(scanf("%f", &a) && a > 0){
		b+= a;
		count++;
	}
	printf("%.2f\n", (b / count));
   return 0;
}
