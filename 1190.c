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

    for (i = MAX; i--;){
        for (j = MAX;j--;){
            scanf ("%lf", &M[i][j]);
        }
    }

   for (j = 0; j < MAX; j++){
        for (i = j + 1; i + j <11 ; i++){
            soma += M[i][j];
	}
    }

    if (T == 'S'){
        printf ("%.1f\n", soma);
    }else{
        printf ("%.1f\n", (soma / 30.0));
    }


    return 0;
}
