#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

 unsigned long long int fib(unsigned long long int n)
{
  unsigned long long int a = 0;
    unsigned long long int b = 1;
    while (n-- > 1) {
       unsigned long long int t = a;
        a = b;
        b += t;
    }
    return b;
}

int main()
{
	int a,b = 0,n;
	
	scanf("%d", &a);
	for(;a--;){	
		scanf("%d", &n);		
		if(n == 0) printf("Fib(0) = 0\n");
		else {
			printf("Fib(%d) = %llu\n",n,fib(n));
		}
	}
   return 0;
}
