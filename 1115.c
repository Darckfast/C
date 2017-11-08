#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
	float Px = 1, Py = 1;
	while(Px && Py){
		scanf("%f %f", &Px, &Py);
		if( Px > 0){
			if(Py > 0){
				printf("primeiro\n");
			}else{
				printf("quarto\n");}
		}
		else if(Px < 0){
			if(Py > 0){
				printf("segundo\n");
			}else{
				printf("terceiro\n");}
		}
	}	
return 0;
}
