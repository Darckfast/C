#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	char s[505];
	fgets(s,505,stdin);	
	s[strlen(s) - 1] = '\0';
	strlen(s) <= 140 ? puts("TWEET") : puts("MUTE");		
    return 0;
}
