#include <stdlib.h>	
#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct problem { char exer[10]; int time; char resul[10];} problem;
 
int main(){
	int flag,i,a,b,pt,cont,j;
	Inicio:
	scanf("%d", &i);
	problem Tab[i], Win[302], Lost[302];
	if( i == 0) goto end;
	cont = 0;	
	pt = 0;
	flag = 0;
	a = 0;
	b = 0;
	for(;i--;){
		scanf(" %s %d %s", Tab[i].exer, &Tab[i].time, Tab[i].resul);
		if(strcmp(Tab[i].resul,"correct") == 0){
			a++;
			cont = a;
			for(;cont--;){
				if(strcmp(Tab[i].exer,Win[cont].exer) == 0){
					strcpy(Tab[i].exer,"");
					break;
				}
			}
			if (cont < 0){
				pt += Tab[i].time;
				strcpy(Win[a].exer,Tab[i].exer);
				flag++;
				
			}
			cont = b;
			for(;cont--;){
				if(strcmp(Tab[i].exer,Lost[cont].exer) == 0){
					pt += 20 ;
					
				}
			}	
		}else{
			strcpy(Lost[b].exer,Tab[i].exer);
			b++;
				
		}
	}
	printf("%d %d\n",flag, pt);
	goto Inicio;
end:
return 0;
}

