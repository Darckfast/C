#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	char string[50];
	int n,b=0;
	
	scanf("%d", &n);
	for(;n--;){
		scanf("%s %d",string,&b);
		strcmp(string,"Thor") == 0 ? puts("Y") : puts("N");  	
	}
	
    return 0;
}
