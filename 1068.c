#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>


int main (){

	char string[10003], string2[10003];

	scanf("%s", string);
	do{
		int a = strlen(string),c = 0;
		memset(string2,'\0',10003);
		for(;a--;){
			if(string[a] == '(' || string[a] == ')'){
				string2[c++] = string[a];
			}

		}
		a = strlen(string2);
		int aux = a,b;
		for(;a--;){
			if(string2[a] == '('){
				b = a;				
				for(;b--;){
					if(string2[b] == ')'){
						string2[b] = '\0';
						string2[a] = '\0';
						break;	
					}				
				}		
			}
		}
		bool i = true;
		for(;aux--;){
			if(string2[aux] == ')' || string2[aux] == '('){
				i = false;
				printf("incorrect\n");
				break;
			}
	
		}
		if(i == true) printf("correct\n");
		scanf(" %s", string);	
	}while(getchar() != EOF);
return 0;
}
