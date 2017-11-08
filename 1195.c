#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h> 
#include <stddef.h>
int compare( const void *a, const void *b){
	return (*(int*)b - *(int*)a);
}
typedef struct tree {
		int item;
		struct tree *left;
		struct tree * right;
}tree;

void ImprimeArvorePre(tree *r)
{	

	if (r != NULL)
	{
		printf(" %d", r->item);
		if(r->left) ImprimeArvorePre(r->left);
		if(r->right) ImprimeArvorePre(r->right);
	}
	else return;
}
void ImprimeArvorePos(tree *r)
{	

	if (r != NULL)
	{
		if(r->left) ImprimeArvorePos(r->left);
		if(r->right) ImprimeArvorePos(r->right);
		printf(" %d", r->item);
			
	}
	else return;
}
void ImprimeArvoreIn(int array[],int n)
{	
	qsort(array,n,sizeof(int),compare);
	for(;n--;){
		printf(" %d",array[n]);
	}	

}
void freetree (tree *r){
	
	if(r != NULL){
		if(r->left) ImprimeArvorePos(r->left);
		if(r->right) ImprimeArvorePos(r->right);
		free(r);
	}

}
void aloca (int array[], int a){
	int n = a;
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
		if(array[a] > ant->item) ant->right = aux;
		else ant->left = aux;
		}
		
	}
	printf("Pre.:");
	ImprimeArvorePre(root);
	printf("\nIn..:");
	ImprimeArvoreIn(array,n);
	printf("\nPost:");
	ImprimeArvorePos(root);
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
		b = a;		
		for(;a--;){
			scanf("%d", &array[a]);
		}
		printf("Case %d:\n", count);
		aloca(array,b);
	}

return 0;
}
