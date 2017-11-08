#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h> 
#include <stddef.h>
#define DESLOC "   "
typedef struct tree {
		int item;
		struct tree *left;
		struct tree * right;
		int nivel;
}tree;
typedef struct pilha{
		int item;
		int nivel;
}pilha;
int compare( const void *a, const void *b){
	pilha *i = (pilha*) a, *j = (pilha*)b;
	if(i->nivel == j->nivel){
		return i->item - j->item;
	}else return i->nivel - j->nivel;
}
int o = 0;
void ImprimeArvore(tree *r, pilha PA[], int n)
{	
	if(r != NULL)
	{
		if(r->left) ImprimeArvore(r->left,PA,n);
		if(r->right) ImprimeArvore(r->right,PA,n);
		PA[o].item = r->item;
		PA[o].nivel = r->nivel;
		//printf(" %d", PA[o].nivel);
		o++;	
	}
	else return;
}
void ImprimiPilha (pilha PA[], int n)
{	
	int flag = 0;
	int a = 0;
	qsort(PA,n,sizeof(pilha),compare);
	for(;a<o;a++){
		if(flag == 0){ printf("%d", PA[a].item);
		flag++;		}		
		else printf(" %d", PA[a].item);	
	}

}
void aloca (int array[], int a, pilha PArray[]){
	int n = a, pilha[n];
	tree *root = NULL;
	tree *aux = NULL,*now = NULL, *ant = NULL;
	for(;a--;){	
		if(root == NULL){
			aux = (tree*) malloc(sizeof(tree));
			aux->left = NULL;
			aux->right = NULL;
			aux->item = array[a];
			root = aux;
			ant = aux;
			aux->nivel = 0;
		}else{
			now = root;
			while(now != NULL){
				if(array[a] > now->item){
					ant = now;
					now = now->right;
				}else{
					ant = now;
					now = now->left;
				}
			}
		aux = (tree*) malloc(sizeof(tree));
		aux->left = NULL;
		aux->right = NULL;
		aux->item = array[a];
		aux->nivel = ant->nivel + 1;
		if(array[a] > ant->item) ant->right = aux;
		else ant->left = aux;
		}
		
	}
	/*printf("Pre.:");
	ImprimeArvorePre(root);
	printf("\nIn..:");
	ImprimeArvoreIn(array,n);
	printf("\nPost:");
	ImprimeArvorePos(root);*/
	ImprimeArvore(root,PArray,n);
	//qsort(PArray,n,sizeof(pilha),compare);
	ImprimiPilha(PArray,n);
	puts("");
	puts("");
	//freetree(root);
}
int main (){

	int n,a,b,count = 1;
	scanf("%d", &n);
	for(;count<=n;count++){
		scanf("%d", &a);
		int array[a];
		pilha PArray[a];
		b = a;		
		for(;a--;){
			scanf("%d", &array[a]);
		}
		printf("Case %d:\n", count);
		aloca(array,b,PArray);
		o = 0;
	}

return 0;
}
