#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int a,b,c;
	
	while(scanf("%d %d %d", &a, &b, &c) != EOF){
		if((a == 0 && b == 0 && c!=0) || (a == 1 && b == 1 &&c!=1)) puts("C");
		else if ((a == 0 && c == 0 && b != 0) || (a == 1 && c == 1 && b != 1)) puts("B");
		else if ((a != 0 && b != 0 && c != 0) || (a == 0 && b == 0 && c == 0))	puts("*");
		else puts("A");
	}
    return 0;
}

