#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <stddef.h>
int main()
{
	int count = 0,c=1;
	char myString[32], string2find[10];	
	const char *tmp;
	ptrdiff_t index;
	while(scanf("%s %s", string2find,myString) != EOF){
		tmp = myString;
		while(tmp = strstr(tmp, string2find))
		{
		   	count++;
			index = tmp - myString;
			tmp += strlen(string2find);
		}
	count != 0 ? printf("Caso #%d:\nQtd.Subsequencias: %d\nPos: %d\n\n",c, count,index+1) : printf("Caso #%d:\nNao existe subsequencia\n\n",c);
	c++;
	count = 0;	
	}
    return 0;
}
