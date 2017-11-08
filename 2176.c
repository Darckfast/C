#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int count = 0;
	char bit[103];
	const char *tmp ;
	scanf("%s", bit);
	tmp = bit;
	char string2find[2] = "1";
	while(tmp = strstr(tmp, string2find))
	{
		   	count++;
			tmp ++;
	}
	if(count == 0) printf("%s0\n",bit);
	else {
		(count%2) == 0  ? printf("%s0\n",bit) : printf("%s1\n", bit);
	}	    
	return 0;
}

