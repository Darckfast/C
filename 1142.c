#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){

	int line, a=1;

	scanf("%d", &line);
	for(;line--;){
		printf("%d %d %d PUM\n", a, a + 1 ,a + 2);
		a += 4;
	}
return 0;
}
