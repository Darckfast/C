#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 12

int main()
{

    int i, j;
    char T;
    double M[MAX][MAX], soma = 0;

    scanf ("%c", &T);

    for (i = 0; i < MAX; i++){
        for (j = 0; j < MAX; j++){
            scanf ("%lf", &M[i][j]);
        }
    }

   for (i = 0; i < MAX; i++){
        for (j = 0; j + i <11 ; j++){
            soma += M[i][j];
	}
    }
	
    if (T == 'S'){
        printf ("%.1f\n", soma);
    }else{
        printf ("%.1f\n", (soma / 66.0));
    }


    return 0;
}
