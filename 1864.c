#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	char phrase[35] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	int n,b=0;
	
	scanf("%d", &n);
	
	for(;b<n;b++){
		printf("%c", phrase[b]);
	}
	puts("");
	
    return 0;
}
