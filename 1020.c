#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
	int a, mes, ano, dia ;
	
	scanf("%i", &a);
	ano = a / 365;
	mes = (a - ano * 365) / 30;
	dia = a - (mes * 30) - (ano * 365);
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
	
return 0;
}
