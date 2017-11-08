#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

#define Dia 24
#define Min 60

int main (){
	int dia,Di, Df, hora,Hi, Hf, Mi, Mf, min,Si, Sf ,sec;

	scanf("Dia %d", &Di);
	scanf("%d : %d : %d", &Hi, &Mi, &Si);
	
	scanf(" Dia %d", &Df);
	scanf("%d : %d : %d", &Hf, &Mf, &Sf);

	dia = Df - Di;
	hora = Hf - Hi;
	min = Mf - Mi;
	sec = Sf - Si;

	if(sec < 0){
		sec = Min + sec;
		min--;
	}
	if(min < 0){
		min = Min + min;
		hora--;
	}	
	if(hora <= 0){
		hora = Dia + hora;
		dia--;
	}
	if(hora >= 24){	
		dia++;
		hora = hora - Dia;
	}
	else if(Hi == Hf && Mi == Mf && Si == Sf){
		hora = Dia;
		min = 0;
		sec = 0;
	}
	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",dia, hora, min,sec);
	

return 0;
}
