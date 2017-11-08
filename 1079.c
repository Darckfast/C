#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int calc ( int n){
	float nota1 ,nota2,nota3, media;
	
	for(;n--;){
		scanf("%f %f %f", &nota1, &nota2, &nota3);

		media = (nota1 *0.2) + (nota2 * 0.3) + (nota3 *0.5);
	
		printf("%.1f\n", media);		
	
	}

}



int main (){
	
	int n;

	scanf("%d", &n);
	
	calc(n);

return 0;
}
