#include <stdlib.h>	
#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	char dna[103], dnacomp[103];
	while(1){
		scanf("%s %s", dna, dnacomp);
		if(getchar () == EOF) break;
		if(strstr(dna,dnacomp) == 0)
			printf("Nao resistente\n");
		else
			printf("Resistente\n");
	}
return 0;
}
