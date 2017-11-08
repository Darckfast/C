#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
	int n, x, y;
	float div;

	scanf("%d", &n);
	for(;n--;){
		scanf("%d %d", &x, &y);

		switch(y){
			case 0:
				printf("divisao impossivel\n");
				break;
			default:
				div = (x*1.0) / (y *1.0);
				printf("%.1f\n",div);
				break;
				
		}


	}	
return 0;
}
