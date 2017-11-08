#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
	
	int n,aux,i = 0, a = 0, j, soma = 0, stop;
	scanf("%d %d", &n, &j);
	
	if(n < j){	
		i = n +1;
		stop = j;

	}else if (n > j){ 	
		i = j + 1;
		stop = n;
	}		
	if( n - j < 0) aux = ( n - j) * -1;
	else  aux = ( n - j);
	while(aux> 0){
		if( n == j){
			soma = 0;
			printf(" rola\n");
			break;
		}
		if( i % 2 != 0){
			aux--;
			soma += i;
			if(i == stop - 1)				
				break;		
		}
			
		if(i == stop - 1)				
			break;		
	i++;
	}
	printf("%d\n", soma);
return 0;
}
