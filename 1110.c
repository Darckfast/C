#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>

int pilha[50];
int pilha2[50];
void criapilha ( int a){
	int c = 1;	
	for(;a--;){
		pilha[a] = c++;
	}

}
void imprimirpilha(int a){
	printf("Discarded cards:");
	int i = 0;
	for(;i < a; i++){
		if(i == a -1) break;		
		printf(" %d",pilha2[i]);
		if(i != a - 2) printf(",");
	}
	printf("\nRemaining card:");
}
void jogacarta ( int a){
	
	int aux, n =a,c = 0;
	for(;a--;){
		pilha2[c++] = pilha[a];		
		int b = a+1, c = 1;
		aux = pilha[a-1];
		if(a == 0) break;
		for(;b--;){
			if(b == 0) break;
			pilha[b] = pilha[b - 1];
		}
		pilha[b--] = aux;
	}
	imprimirpilha(c);
	printf(" %d\n", pilha[0]);

}

int main (){

	int n;
	
	scanf("%d", &n);
	do{
		criapilha(n);
		jogacarta(n);	
	}while(scanf("%d", &n) && n);

return 0;
}
