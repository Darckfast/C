#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	char s[7];
	int n,b;
	
	scanf("%d %d", &b, &n);
	
	for(;n--;){
		scanf(" %s", s);
		switch(s[0]){
			case 'f':
				b++;
				break;
			case 'c':
				b--;
				break;
		}
	}
	printf("%d\n", b);
    return 0;
}
