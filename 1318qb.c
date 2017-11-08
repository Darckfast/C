#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int compara ( const void * a, const void *b){
	return ( *(int*)a - *(int*)b);
}




/*void bubble_sort(int vet[],int max){
	int flag,i,aux2 = 0,aux3 = NULL, aux;
	
	do{
		flag = 0;
		for(i = 0;i < (max-1);i++){
			if(vet[i] < vet[i+1]){
				aux = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = aux;
				flag = 1;
			}
		}
	}while(flag == 1);
	for(i = 0;i < (max-1);i++){
		if(vet[i] == vet[i+1]){
			if(vet[i] != aux3){
				aux2 += 1;
				aux3 = vet[i];	
			}		
		}
	}
	printf("%d\n",aux2);
}*/
void teste (int vet[], int max){
	int aux2 = 0, aux3 = NULL, i;

	for(i = 0;i < (max-1);i++){
		if(vet[i] == vet[i+1]){
			if(vet[i] != aux3){
				aux2 += 1;
				aux3 = vet[i];	
			}		
		}
	}
	printf("%d\n",aux2);
}
int main (){

	int ticket, tam_vet, i = 0;
	while(1){
		i = 0;
		scanf("%d %d", &ticket, &tam_vet);

		if( ticket == 0 && tam_vet ==0) break;

		int vet[tam_vet];

		while( i < tam_vet){
			scanf("%d", &vet[i]);	
			i++;
		}
	qsort(vet,tam_vet,sizeof(int), compara);	
	//for( i = 0; i < tam_vet; i++){
	//	printf("vet = %d\n", vet[i]);
	//}
	teste(vet,tam_vet);
	//printf("\n\n");
	//bubble_sort(vet, tam_vet);
	}
return 0;
}
