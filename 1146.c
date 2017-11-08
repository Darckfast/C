#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){

	int num,i;
	Inicio:	
	scanf("%d", &num);
	i = 1;
	switch(num){
		case 0:
			break;
		default:
			while(num){
				printf("%d", i);
				i++;
				if(num > 1) printf(" ");
				num--;
			}
			printf("\n");
			goto Inicio;
			break;
	}
return 0;
}
