#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){

	int num,fat = 1;
	scanf("%d", &num);
	while(num){
		fat *= num;
		num--;
	}
	printf("%d\n", fat);
return 0;
}
