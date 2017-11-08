#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int a,b,count1 = 0, count2 = 0;
	
	while(scanf("%d", &a) *a){
		for(;a--;){
			scanf("%d", &b);
			if(b == 0) count1++;
			else count2++;
		}
		printf("Mary won %d times and John won %d times\n", count1,count2);
		count1 = count2 = 0;
	}

    return 0;
}

