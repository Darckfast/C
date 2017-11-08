#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define COR 15
#define TAM 2
#define NOME 100
#define MAX 60

typedef struct camisa{char nome[NOME]; char tam; char cor[COR];} camisa;

int compara(const void *a, const void *b){
	camisa *i = (camisa *)a, *j = (camisa *)b;
	if(strcmp(i->cor, j->cor) == 0)
		if(i->tam > j->tam) return -1;
		else if (i->tam < j->tam) return 1;
		else return strcmp(i->nome, j->nome);
   else return strcmp(i->cor, j->cor);
}
void func (int n){
	int i;
	while(n){
		
		camisa vet[n];
		i = n;
		//for(;n--;){
		for(i = 0; i < n; i++){
			scanf("%[^\r\n]", vet[i].nome);
			scanf("%s %c", &vet[i].cor, &vet[i].tam);
			while(getchar()!='\n');
			
		}
		
		qsort(vet, n, sizeof(camisa), compara);
		//for(;i--;)
		for(i = 0; i < n; i++)
			printf("%s %c %s\n", vet[i].cor, vet[i].tam, vet[i].nome);
		
        scanf("%d\n", &n);
	switch(n){
		case 0:
			goto EndWhile;
		default:
			printf("\n");
			func(n);
		
		}       		
	EndWhile: break;}
	
	

}
int main(){
	int n;

	scanf("%d\n", &n);	
	func(n);	
return 0;	
}
