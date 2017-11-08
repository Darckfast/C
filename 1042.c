#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define TAM 3
 
int main()
{
	int 	vetor[TAM],
		vetor2[TAM],
		x = 0,
      		y = 0,
      		aux = 0;      
  
  	for( x = 0; x < TAM; x++ ){
    		scanf("%d",&aux);
    		vetor[x] = aux;
		vetor2[x] = aux;
	}

	for( x = 0; x < TAM; x++ ){
		for( y = x + 1; y < TAM; y++ ){
 			if ( vetor[x] > vetor[y] ){
        			aux = vetor[x];
        			vetor[x] = vetor[y];
        			vetor[y] = aux;
      			}
    		}
  	}
	for( x = 0; x < TAM; x++ ){
    		printf("%d\n",vetor[x]);} 
  	printf("\n");
		  
	for( x = 0; x < TAM; x++ ){
    		printf("%d\n",vetor2[x]);}  
return 0;
}
