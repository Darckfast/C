#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
	
int main (){
	float i; 
	int cont = 0, a =0;
	while(cont < 6){
		scanf("%f", &i);
		if( i >0.0)	a++;
		cont++;
	}
	printf("%d valores positivos\n", a);
return 0;
}
