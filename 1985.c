#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int cod,qtd,n;
	float total =0;
	scanf("%d", &n);
	
	for(;n--;){
		scanf("%d %d", &cod, &qtd);
	
		switch(cod){
			case 1001:
				total+=1.5 *qtd;
				break;
			case 1002:
				total+=2.5 * qtd;
				break;
			case 1003:
				total+=3.5 * qtd;
				break;
			case 1004:
				total+=4.5 * qtd;
				break;
			case 1005:
				total+=5.5 * qtd;
				break;
		}
	}
	printf("%.2f\n", total);
    return 0;
}

