#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct vet{ int index; int num;} vet;	

int compare (const void* a, const void *b){

	vet *vetA = (vet *) a;
	vet *vetB = (vet *) b;
	
	return (vetB->num - vetA->num);
}

int main (){
	
	vet array[100];
	int indice = 0;
	while(1){
		scanf("%d", &array[indice].num);
		array[indice].index = indice;
		indice++;
		if(indice == 100) break;	
	}
	
	qsort(array,100, sizeof(vet),compare);
	
	printf("%d\n%d\n", array[0].num, array[0].index + 1);
return 0;
}
