#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (){
	int a;
	while(1){
		scanf("%d", &a);
		switch(a){
			case 2002:
				printf("Acesso Permitido\n");
				goto EndWHile;
			default:
				printf("Senha Invalida\n");
				break;


		}
	}EndWhile: ; 
return 0;
}
