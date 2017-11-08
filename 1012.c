#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

#define PI 3.14159

int main (){
	 
	float a, b, c, TR, CI, TP, QD, RT;
	scanf("%f %f %f", &a, &b, &c);
	
	TR = (a * c) / 2.0;
	CI = PI * pow(c,2);
	TP = 1.0/2*(a + b) * c;
	QD = pow(b,2);
	RT = a *b;
	printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",TR , CI, TP, QD, RT);

return 0;
}
