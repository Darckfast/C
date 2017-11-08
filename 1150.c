#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main(){

	int a, b,count = 1;
	
	scanf("%d", &a);
	
	while(scanf("%d", &b) && b <= a){}
	int n = a;
	while(a<b){
		a+= n++;
		count++;
	}
	printf("%d\n", count);
return 0;
}
