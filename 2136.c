#include <stdlib.h>	
#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct convidados{ 	char nome[30];
				char resp[5];
				struct convidados *prox;
}convidados;

int compara( const void * a, const void * b){
	convidados *j = ( convidados *) a;
	convidados *k = ( convidados *) b;
	if(strcmp(j->resp,k->resp) != 0)
		return strcmp(j->resp,k->resp);
	else return strcmp(k->nome,j->nome);	
}

int main (){
	int cont,b =0,a=0,c=0,d=0;
	convidados vConv[100], win[100], *inicio = NULL,*aux,*ant= NULL;	
	while(1){
		scanf("%s %s ", vConv[a].nome, vConv[a].resp);
		aux = &vConv[a];
		if(strcmp(aux->nome,"FIM")==0){
			break;
		}
		d++;		
		aux->prox = NULL;
		if(strcmp(aux->resp,"YES") == 0){
			if(strlen(aux->nome) > b){
				b = strlen(aux->nome);
				c++;		
				cont = c;
				for(;cont--;){
					if(strcmp(aux->nome,win[cont].nome) ==0){
						break;
					}
				}
				if(cont <0){
					strcpy(win[c].nome,aux->nome);
				}				
			}
		}
		ant = aux;
		a++;
	}
	qsort(vConv,a,sizeof(convidados),compara);
	cont = a;
	ant = NULL;
	int flag = 0;
	convidados * comp;
	for(;d--;){
		for(;a--;){
			aux = &vConv[d];
			comp = &vConv[a];
			if(strcmp(aux->nome,comp->nome) != 0 && strcmp(aux->resp,"YES") == 0){
				cont--;
				break;
			}
		}
		aux = &vConv[d];
		if(flag == 0){
			inicio = aux;
			flag++;
		}
		aux->prox = &vConv[a];
		if(d <= 0) break;
		a = d;	
	}
	for(;cont--;){
		aux = &vConv[cont];
		if(cont - 1  < 0) aux->prox = NULL;
		else aux->prox = &vConv[cont - 1];
	}
	aux = inicio;
	while(aux != NULL){
		printf("%s\n", aux->nome);
		aux = aux->prox;
	}
	
	printf("\nAmigo do Habay:\n%s\n", win[c].nome);
return 0;
}
