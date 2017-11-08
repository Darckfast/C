#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
	int a, min, hora, sec ;
	
	scanf("%i", &a);

	hora = a / 3600;
	min = (a / 60) - hora * 60;
	sec = a - (min * 60) - (hora * 3600);
	printf("%d:%d:%d\n", hora, min, sec);
	
return 0;
}
