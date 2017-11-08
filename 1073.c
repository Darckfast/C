#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
	
	int a,i = 2;
		
	scanf("%d", &a);
	
	while(1){
		printf("%d^2 = %.0f\n", i,pow(i,2));
		if(i >= a) break;
		i += 2;	
	}
return 0;
}
