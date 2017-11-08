#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int x1,y1,x2,y2;
    
    while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2) *(x1 + x2 + y1 + y2)){
                   if(x1 == x2 && y1 == y2) printf("0\n");
                   else if((x2-x1) == -(y2-y1) || -(x2-x1) == -(y2-y1) || -(x2-x1) == (y2-y1) || (x2-x1) == (y2-y1)) printf("1\n");
                   else if(x1 == x2 || y1 == y2) printf("1\n");
                   else printf("2\n");
    }
    return 0;
}

