#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int DIVCOMUN(int a, int b){
	while (b > 0){
		int rem = a % b;
		a = b;
		b = rem;}
	return a;
}

int main (){
	int ac, i,db;
	scanf("%d", &i);
	for( ; i-- ; ){
		scanf("%d %d", &ac, &db);
		printf("%d\n",DIVCOMUN(ac, db));
	}	
return 0;
} 
