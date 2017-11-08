#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>

int main (){

	char string[1003];
	int c;
	scanf("%d", &c);
	for(;c--;){
		int d = 0,b = 0;
		scanf("%s", string);		
		int a = strlen(string);
		int aux = a;
		for(;a--;){
			if(string[a] == '>'){
				b = a;				
				for(;b--;){
					if(string[b] == '<'){
						string[b] = '0';
						d++;
						break;
					}				
				}		
			}
		}
		printf("%d\n",d);
	}
return 0;
}
