#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int count  = 0, a;
	char player1[50], player2[50];
	scanf("%d",&a);
	while(scanf(" %s %s", player1,player2) *a){
		count++;
		a--;
		switch(player1[2]){
			case 's':
				switch(player2[2]){
					case 'g':
						printf("Caso #%d: Bazinga!\n", count);  
						break;
					case 'p':
						printf("Caso #%d: Bazinga!\n", count);  
						break;
					case 's': 
						printf("Caso #%d: De novo!\n", count);  
						break;
					default:
						printf("Caso #%d: Raj trapaceou!\n", count);  
						break;				
				}
				break;
			case 'p':
				switch(player2[2]){
					case 'o':
						printf("Caso #%d: Bazinga!\n", count);  
						break;
					case 'd':
						printf("Caso #%d: Bazinga!\n", count);  
						break;
					case 'p': 
						printf("Caso #%d: De novo!\n", count);  
						break;
					default:
						printf("Caso #%d: Raj trapaceou!\n", count);  
						break;				
				}
				break;
			case 'd':
				switch(player2[2]){
					case 'g':
						printf("Caso #%d: Bazinga!\n", count);  
						break;
					case 's':
						printf("Caso #%d: Bazinga!\n", count);  
						break;
					case 'd': 
						printf("Caso #%d: De novo!\n", count);  
						break;
					default:
						printf("Caso #%d: Raj trapaceou!\n", count);  
						break;				
				}
				break;
			case 'o':
				switch(player2[2]){
					case 's':
						printf("Caso #%d: Bazinga!\n", count);  
						break;
					case 'd':
						printf("Caso #%d: Bazinga!\n", count);  
						break;
					case 'o': 
						printf("Caso #%d: De novo!\n", count);  
						break;
					default:
						printf("Caso #%d: Raj trapaceou!\n", count);  
						break;				
				}
				break;
			case 'g':
				switch(player2[2]){
					case 'p':
						printf("Caso #%d: Bazinga!\n", count);  
						break;
					case 'o':
						printf("Caso #%d: Bazinga!\n", count);  
						break;
					case 'g': 
						printf("Caso #%d: De novo!\n", count);  
						break;
					default:
						printf("Caso #%d: Raj trapaceou!\n", count);  
						break;				
				}
				break;
		}
	}
    return 0;
}
