#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
	float NTa, NTb, NTc , NTd , NTe, media ;
	scanf("%f %f %f %f", &NTa, &NTb, &NTc ,&NTd);
	media = ((NTa*2) + (NTb*3) + (NTc*4) + NTd) / 10.0; 
	
	if(media < 5.0){
		printf("Media: %.1f\nAluno reprovado.\n", media);
	}else if(media >= 5 && media <= 6.9){
		scanf("%f", &NTe);
		if((media + NTe) / 2.0 > 5.0){
			printf("Media: %.1f\nAluno em exame.\nNota do exame: %.1f\nAluno aprovado.\nMedia final: %.1f\n", media, NTe,((media + NTe)/2));
		}else{
			printf("Media: %.1f\nAluno em exame.\nNota do exame: %.1f\nAluno reprovado.\nMedia final: %.1f\n", media, NTe,((media + NTe)/2));}

	}else{
		printf("Media: %.1f\nAluno aprovado.\n", media);
	}		

return 0;
}
