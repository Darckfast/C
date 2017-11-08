#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>

int compare (const void *a, const void *b){
	return (*(int*)a) - (*(int*)b);
}

int main (){

	int n,i;
	scanf("%d", &n);	
	for(;n--;){
		scanf("%d",&i);
	
		int vetor[i], vetor2[i], size = i,count = 0;			

		for(;i--;){
			scanf("%d", &vetor[i]);
			vetor2[i] = vetor[i];
		}
		qsort(vetor,size,sizeof(int),compare);
		for(;size--;){
			if(vetor[size] == vetor2[size]) count++; 
		}
		printf("%d\n", count);	
	}
return 0;
}
