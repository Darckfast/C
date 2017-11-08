#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int a,b,c,h;
	
	scanf("%d %d %d", &a,&b,&c);
	if((a+b) > 23)h = ((a+b) - 24); else h =(a +b);
	(h + c) < 0 ? printf("%d\n", ((h + c) + 24)):printf("%d\n", (h + c));
    return 0;
}

