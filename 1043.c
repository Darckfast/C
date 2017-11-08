#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>

bool checktri (float a, float b, float c){

	if( a < (b + c));
	else return false;
	if( b < (a + c));
	else return false;
	if( c < (a + b));
	else return false;
	
	return true;

}

int main(){

	float a,b,c;
		
	scanf("%f %f %f", &a,&b,&c);
	
	if(checktri(a,b,c)){
		printf("Perimetro = %.1f\n", (a+b+c));
	}else printf("Area = %.1f\n", ((a+b) * c)/2.0);


   return 0;
}
