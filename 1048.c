#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
	
int main (){
	float SalI, rej;
	
	scanf("%f", &SalI);
	if(SalI	<= 400.00)
		rej = 0.15;
	else if(SalI <= 800.00)
		rej = 0.12;
	else if(SalI <=1200.00)
		rej = 0.10;
	else if(SalI <=2000.00)
		rej = 0.07;
	else
		rej = 0.04;
	printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %\n",((SalI*rej)+SalI), (SalI*rej), rej *100); 
return 0;
}
