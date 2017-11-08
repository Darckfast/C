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
	int num [3];
	int i = 0, ac, db;
	while(i <4){
		scanf("%d", &num[i]);
		i++;}
	ac = num[0]*num[3]+num[1]*num[2];
	db = num[1]*num[3];
	printf("%d %d\n",(ac / DIVCOMUN(ac, db)), (db / DIVCOMUN(ac, db)));
	 
		
return 0;
} 
