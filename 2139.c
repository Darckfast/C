#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <stddef.h>
int main()
{
	int dia,mes,days_per_month[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	while(scanf("%d %d", &mes,&dia) != EOF){
		int tot_days = 0;
		switch(mes){
			case 12:
				switch(dia){
					case 24:	
						puts("E vespera de natal!");
						break;
					case 25:
						puts("E natal!");
						break;
					default:
						dia > 25 ? 
						puts("Ja passou!"): printf("Faltam %d dias para o natal!\n", 25-dia);
						break;
				}
				break;
			default:
				tot_days = 25 - dia;
				while (mes != 12) {
					tot_days += days_per_month[mes++];
				}
				printf("Faltam %d dias para o natal!\n",tot_days);
			break;
		}
	}
    return 0;
}
