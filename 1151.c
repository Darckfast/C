#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

 int fib( int n)
{
     int a = 0;
     int b = 1;
    while (n-- > 1) {
         int t = a;
        a = b;
        b += t;
    }
    return b;
}

int main()
{
	int a,b = 0,n;
	
	scanf("%d", &a);
	printf("0 ");
	for(b = 1; b < a;b++){
		printf("%d", fib(b));
		if((b + 1) != a) printf(" ");
	}
	puts("");
   return 0;
}
