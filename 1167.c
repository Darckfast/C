#include <stdlib.h>	
#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct participantes {char nome[30]; 
		int token;
		int cont;
		struct participantes *prox;
		struct participantes *ant;
}participantes;
typedef struct participantes TPar;

int imprimir (TPar * inicio,  int c){
	int cont = 0, flag= 0, b=0,tok;
	
	TPar *aux;	
	
	tok = inicio->token;		
	loop:
	if( flag != 0) b = 1;

	aux = inicio;	
	while(1){
		aux->cont = b;
		if(b == tok){
			tok = aux->token;
			if(tok % 2 != 0) inicio = aux->prox;
			else inicio = aux->ant;
			aux->ant->prox = aux->prox;
			aux->prox->ant = aux->ant;
			if(flag == c - 1) break;
			flag++;
			b++;			
			goto loop;			
		}
		b++;
		if(tok % 2 != 0) aux = aux->prox;
		else aux = aux->ant;
	}
	printf("Vencedor(a): %s\n", aux->nome);
}
int main(){
	int i, c=0;

	while(scanf("%d", &i) && i){
		participantes TPar2[i];
		TPar *inicio = NULL, *ant = NULL, *aux;
		c = i;
		for(;i--;){
			scanf(" %s %d", &TPar2[i].nome, &TPar2[i].token);
			aux= &TPar2[i];			
			aux->cont = 0;
			aux->ant = ant;			
			if( inicio == NULL){
				inicio = &TPar2[i];
			
			}else ant->prox = aux; 
			
			if( i == 0) {
				aux->prox = inicio;
				inicio->ant = aux;
			}
			ant = aux;
		}
		imprimir(inicio,c);
	}
return 0;
}
