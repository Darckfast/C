#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>	
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float sal,x;
    scanf("%f", &sal);
    if(sal <= 2000.0) {
        printf("Isento\n");
    }
    else if(sal <= 3000.0 ){
        x = (sal - 2000.0)*0.08;
        printf("R$ %.2f\n", x);
    }
    else if( sal <= 4500.0){
        x = (sal - 3000.0)*0.18 + (1000*0.08);
        printf("R$ %.2f\n", x);
    }
    else {
        x = (sal - 4500)*0.28 + (1500*0.18) + (1000*0.08);
        printf("R$ %.2f\n", x);
    }
    return 0;
}
