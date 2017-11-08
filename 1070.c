#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
	
	int n,i = 0, a = 0;
	scanf("%d", &n);
	i = n;
	while(n > 0){
		if( i % 2 != 0){
			printf("%d\n", i); 	
			n--;
			a++;
			if(a == 6)				
				break;		
		}
			
	i++;
	}

return 0;
}
