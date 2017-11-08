#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
	
int main (){
	int i,cont = 0, a = 0;
	while(cont < 5){
		scanf("%d", &i);
		if( i %2 == 0.0){
			a++;
		}		
		cont++;
	}
	printf("%d valores pares\n", a);
return 0;
}
