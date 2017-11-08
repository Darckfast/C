#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int a,b;
	
	scanf("%d", &a);
	
	for(b = 1;b<=a;b++){
		if((a%b) == 0) printf("%d\n", b);
	}
    return 0;
}

