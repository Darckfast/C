#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int n, i, num,flag;
	
	scanf("%d", &num);

	for(;num--;){	
		scanf("%d",&n);
		flag = 0;
	    	for(i=2; i<=n/2; ++i)
	    	{
			if(n%i==0)
			{
			    	flag=1;
				break;
			}
	    	}

	    	if (flag==0)
			printf("%d eh primo\n",n);
	    	else
			printf("%d nao eh primo\n",n);
    }
return 0;
}
