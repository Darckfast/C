#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int x[10], i = 0,num;
	while( i != 10){
		scanf("%d", &num);
		if( num > 0 ) x[i] = num;
		else x[i] = 1;
		printf("X[%d] = %d\n",i, x[i]);		
		i++;
	}
	
return 0;
}
