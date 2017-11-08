#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int N[10], i = 0,num;
	scanf("%d", &N[i]);	
	printf("N[%d] = %d\n",i , N[i ]);
	while( i != 9){
		i++;
		N[i] = N[i-1] * 2;
		printf("N[%d] = %d\n",i , N[i ]);		
	}
	
return 0;
}
