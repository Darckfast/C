#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int divorcio ( int a ){
	int num, resul;
	for (;a--;){
		scanf("%d", &num);
		resul = 0;		
		if( num == 0) resul += 1223145;
		resul += num % 2; //1 impar 2 par 0 par
		if(num < 0) resul += 3;//4 impar negativo 1 impar posi 0 posi par 3 par neg
		//printf("%d\n", resul);
		switch(resul){
			case 0:
				printf("EVEN POSITIVE\n");
				break;
			case 1:
				printf("ODD POSITIVE\n");
				break;
			case 2 :
				printf("ODD NEGATIVE\n");
				break;
			case 3:
				printf("EVEN NEGATIVE\n");
				break;
			default:
				printf("NULL\n");
				break;	
		}
	}
}

int main (){
	
	int a;
		
	scanf("%d", &a);
	
	divorcio(a);
return 0;
}
