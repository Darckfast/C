#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
	
	int n, a = 0,num, cont;
	
	scanf("%d", &n);
	while(n > a){
		scanf("%d", &num);
		if( num >9 && num < 21)		cont++;	
		a++;
	}
	printf("%d in\n%d out\n", cont, abs(a - cont));
return 0;
}
