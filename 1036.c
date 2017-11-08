#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
	float a, b, c, r1, r2, alpha;
	
	scanf("%f %f %f", &a, &b, &c);

	alpha = pow(b,2) - (4*a *c);
	if(alpha > 0 && a != 0){
		r1 =  ((-b) + sqrt(alpha))/ (2 * a);
		r2 =  ((-b) - sqrt(alpha))/ (2 * a); 

		printf("R1 = %.5f\nR2 = %.5f\n", r1 , r2);	
	}else{
		printf("Impossivel calcular\n");}
	return 0;
}
