#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	double x,a=0;
	scanf("%lf", &x);
	while(x--)
   	 {
        a+=2.0;
        a = 1.0/a;
    	}
    	a += 1.0;
    	printf("%.10lf\n", a);

    return 0;
}
