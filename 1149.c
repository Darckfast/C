#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int a,b = 0,n;
	
	scanf("%d", &a);
	while(scanf("%d", &n) != EOF){	
		if(n > 0){
			for(;n--;){	
				b += a++;
			}
		}
	}  
	printf("%d\n", b);
    return 0;
}
