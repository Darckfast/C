#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int a,b,c=0,i=5;
	
	scanf("%d", &a);
	
	for(;i--;){
		scanf("%d", &b);
		if(b == a) c++;	
	}
	printf("%d\n", c);
    return 0;
}

