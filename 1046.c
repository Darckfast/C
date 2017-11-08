#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
	
#define Min  	60
#define Dia 	24
int main (){
	int Hi, Hf,hora ;
	scanf("%d %d", &Hi, &Hf);
	hora = Hf - Hi;
	if(hora < 0){
		hora = Dia + hora;
	}
	else if(Hi == Hf){
		hora = Dia;
	}
	printf("O JOGO DUROU %d HORA(S)\n", hora);
return 0;
}
