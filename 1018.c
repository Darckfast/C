#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h> 
#include <ctype.h>
int main(){

   	int notas100 = 0, notas50 = 0, notas20 = 0, notas10 = 0, notas5 = 0, notas2 = 0, notas1 = 0;
   	int moedas50 = 0, moedas25 = 0, moedas10 = 0, moedas5 = 0, moedas1 = 0;
  	int N;

   	scanf ("%d", &N);
  	N += 1e-9;


   	printf("%d\n",N);
      	if (N >= 100) {
         	notas100 = N /100;
      	}
     	printf("%d nota(s) de R$ 100,00\n", notas100);
      	if (N >= 50){
         	notas50 = (N - (notas100 * 100)) / 50;
      	}
      	printf("%d nota(s) de R$ 50,00\n", notas50);
      	if (N >= 20){
         	notas20 = (N - (notas100 * 100) - (notas50 * 50)) / 20;
      	}
      	printf("%d nota(s) de R$ 20,00\n", notas20);

      	if (N >= 10){
         	notas10 = (N - (notas100 * 100) - (notas50 * 50) - (notas20 * 20)) / 10;
      	}
      	printf("%d nota(s) de R$ 10,00\n", notas10);

      	if (N >= 5){
         	notas5 = (N - (notas100 * 100) - (notas50 * 50) - (notas20 * 20) - (notas10 * 10)) / 5;
      	}
      	printf("%d nota(s) de R$ 5,00\n", notas5);
        if (N >= 2){
         	notas2 = (N - (notas100 * 100) - (notas50 * 50) - (notas20 * 20) - (notas10 * 10) - (notas5 * 5)) / 2;
      	}
      	printf("%d nota(s) de R$ 2,00\n", notas2);
        if (N >= 1){
         	notas1 = (N - (notas100 * 100) - (notas50 * 50) - (notas20 * 20) - (notas10 * 10) - (notas5 * 5) - (notas2 * 2)) / 1;
      	}
      	printf("%d nota(s) de R$ 1,00\n", notas1);
      return 0;
   }
