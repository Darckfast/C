#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#define PCQ 4.0
#define PXS 4.5
#define PXB 5.0
#define PTS 2.0
#define PR 1.5
int main (){
	int a, b ;
	scanf("%i %i", &a, &b);
	switch(a){
		case 1:
			printf("Total: R$ %.2f\n", (PCQ * b));
			break;
		case 2:
			printf("Total: R$ %.2f\n", (PXS * b));
			break;
		case 3:
			printf("Total: R$ %.2f\n", (PXB * b));
			break;
		case 4:
			printf("Total: R$ %.2f\n", (PTS * b));
			break;
		case 5:
			printf("Total: R$ %.2f\n", (PR * b));
			break;
	
	}

return 0;
}
