#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
typedef struct nota {
	int id;
	float not;
}nota;

int compare(const void*a, const void*b){
	nota *i = (nota *)a;
	nota *j = (nota *)b;
	if((i->not - j->not) < 0) return 1;	
	else return (j->not - i->not);
}
int main()
{
	int a;
	scanf("%d", &a);
	
	nota Tnota[a];
	int i=0;
	for(;i<a;i++){
		scanf("%d %f", &Tnota[i].id,&Tnota[i].not);
	}
	qsort(Tnota,i,sizeof(nota),compare);
	if(Tnota[0].not >=8 ) printf("%d\n", Tnota[0].id);
	else puts("Minimum note not reached");

    return 0;
}

