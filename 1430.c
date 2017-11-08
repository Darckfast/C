#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

#define vW 1
#define vH 0.5
#define vQ 0.25
#define vE 0.125
#define vS 0.0625
#define vT 0.03125
#define vX 0.015625


int main (){

	char line[200];
	float somador ;
	int i, aux, cont;
	do{
		scanf("%s", line);
		i = 1;
		cont = 0;
		aux = 0;
		somador = 0;
		if(line[0] == '*') break;
	
		while( i < strlen(line)){
			if(line[i] == '/') {
				cont++;
				if(somador != 1){
					i++;
					aux++;
					somador = 0;
				}else if(somador == 1){
					i++;
					somador = 0;
				}
			}else{
				switch(line[i]){
					case 'W':
						somador += vW;
						break;
					case 'H':
						somador += vH;
						break;
					case 'Q':
						somador += vQ;
						break;
					case 'E':
						somador += vE;
						break;
					case 'S':
						somador += vS;
						break;
					case 'T':
						somador += vT;
						break;
					case 'X':
						somador += vX;
						break;
				}
				i++;
			}	
		}				
	printf("%d\n", cont - aux);
	}while(line[0] != '*');
return 0;
}
