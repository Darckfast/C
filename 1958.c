#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	long double X;
	char s[120];
	scanf("%LE", &X);
	sprintf(s,"%LE", X);
	if(s[0] != '-') printf("+");
	printf("%.4LE\n", X);
	return 0;
}
