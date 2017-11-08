#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a,r1,r2;
	
	scanf("%d", &a);
	for(;a--;){
		scanf("%d %d", &r1,&r2);
		
		printf("%d\n", (r1+r2));
	}
    return 0;
}
