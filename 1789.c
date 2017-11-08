#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a,r1,r2='\0';
	
	while(scanf("%d", &a)!=EOF){
		for(;a--;){
			scanf("%d", &r1);
			r1>r2  ?  r2 = r1: r2;
		}
		if(r2<10) puts("1");
		else if(r2<20) puts("2");
		else puts("3");
		r2 = '\0';	
	}
    return 0;
}
