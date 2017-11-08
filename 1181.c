#include <stdlib.h>	
#include <stdio.h>
#include <math.h>
#include <string.h>
 
int main(){
	int l,h, line;
	char op;
	float vet[12][12],sum = 0;
	scanf("%d %c", &line, &op);
	for(h = 0; h < 12; h++){
		for(l = 0; l < 12; l++){
			scanf("%f", &vet[h][l]);
		}

	}
	//printf("%c %d", op, line);
	switch(op){
		case 'S':
			//printf("h = %d line = %d", h, line);
			for(;h--;){
				sum += vet[line][h];
			}
			printf("%.1f\n", sum);
			break;
		default:
			for(;h--;){
				sum += vet[line][h];
			}
			printf("%.1f\n", sum / 12.0);
			break;			
	}
return 0;
}

