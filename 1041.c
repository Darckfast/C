#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
	float Px, Py;
	scanf("%f %f", &Px, &Py);

	if(Px == 0 && Py == 0){
		printf("Origem\n");}

	else if(Py == 0){
		printf("Eixo X\n");}

	else if(Px == 0){
		printf("Eixo Y\n");}
		
	else if( Px > 0){
		if(Py > 0){
			printf("Q1\n");
		}else{
			printf("Q4\n");}
	}
	else if(Px < 0){
		if(Py > 0){
			printf("Q2\n");
		}else{
			printf("Q3\n");}
	}	
return 0;
}
