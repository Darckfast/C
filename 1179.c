#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

void print_vetor_par (int vetor[], int size){
	
	int a = 0;
	
	for(;a<size;a++){
		printf("par[%d] = %d\n",a,vetor[a]);
		vetor[a] = '\0';	
	}

}

void print_vetor_im (int vetor[], int size){
	
	int a = 0;
	
	for(;a<size;a++){
		printf("impar[%d] = %d\n",a,vetor[a]);
		vetor[a] = '\0';
	}

}

int main(){

	int par[500], impar[500],a,x=0,y=0;
	
	while(scanf("%d", &a) != EOF){
		if(y>4){
			print_vetor_im(impar,y);
			y = 0;
		}
		if(x>4){
			print_vetor_par(par,x);		
			x = 0;
		}
		if((a%2) != 0) impar[y++] = a;
		else par[x++] = a;
	}
	print_vetor_im(impar,y);
	print_vetor_par(par,x);	
return 0;
}
