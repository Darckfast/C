#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int num[20], i= 20;
	for(;i--;){
		scanf("%d", &num[i]);
	}
	i = 0;
	while( i < 20){
		printf("N[%d] = %d\n", i ,num[i]);
		i++;
			
	}
return 0;
}
