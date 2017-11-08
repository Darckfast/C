#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
	int  GWin, IWin,cont=0,Empt=0,ncalc, GG = 0, II = 0;
	Inicio:
		scanf("%d %d", &GWin, &IWin);
		cont++;
		if(GWin > IWin)
			GG++;
		else if( GWin < IWin)
			II++;
		else Empt++;
	printf("Novo grenal (1-sim 2-nao)\n");
	scanf("%d", &ncalc);
	
	switch(ncalc){
		case 1:
			goto Inicio;
			break;
		case 2:
			break;
	}
	printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", cont, GG, II, Empt);
	
	if(GG > II) printf("Inter venceu mais\n");
	else if (GG < II) printf("Gremio venceu mais\n");
	else printf("Nao houve vencedor\n");
return 0;
}
