#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main (){

	int x, y, i , j, jantar = 0;
	bool comp;
	while(1){		
		scanf("%d %d", &x, &y);
		if( x == 0 && y == 0) break;	
		int vet[x][y];
		for( j = x; j--; ){
			for( i = y; i--; ){
				scanf(" %d", vet[j]+i);
			}
		}
		for( j = x; j-- ; ){
			jantar = 0;
			for( i = y; i--; ){		
				jantar += vet[j][i];
				}if(jantar == y ){
					comp = true;
					break;
				}
		}
		comp == true ? puts ("yes") : puts("no");
		comp = 0;
	
	}
return 0;
}
