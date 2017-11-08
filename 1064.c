#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
	
int main (){
	float i, media = 0; 
	int cont = 0, a = 0;
	while(cont < 6){
		scanf("%f", &i);
		if( i >0.0){
			a++;
			media += i;		
		}		
		cont++;
	}
	printf("%d valores positivos\n%.1f\n", a, media/a);
return 0;
}
