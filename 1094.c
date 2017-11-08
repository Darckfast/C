#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct vet{ int qtd; char id;} vet;	


int main (){
	
	int n, coelho = 0, sapo=0, rato=0, sum=0;
	float pc, pr, ps;
	scanf("%d", &n);
	
	vet array[n];
	
	for(;n--;){

		scanf("%d %c", &array[n].qtd, &array[n].id);
		
		sum += array[n].qtd;
	
		switch(array[n].id){
	
			case 'C':
				coelho +=  array[n].qtd;
				break;
			case 'R':
				rato +=  array[n].qtd;
				break;
			case 'S':
				sapo +=  array[n].qtd;
				break;
		}	
	
	}

	pc =  coelho * 100.00/sum;
	ps =  sapo * 100.00/sum;
	pr =  rato * 100.00 /sum;
	
	printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %\nPercentual de ratos: %.2f %\nPercentual de sapos: %.2f %\n", sum, coelho, rato, sapo, pc, pr, ps);

return 0;
}
