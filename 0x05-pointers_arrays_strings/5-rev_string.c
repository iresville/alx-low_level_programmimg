#include "main.h"

/**
*rev_string - Reverses a string
*@s: Input pointer string
*Return: String in reverse
*/

void rev_string(char *s)
{
	int i;
	int j;

	char ss[1000];

	for (i = 0; s[i]  != 0; i++)
	    ss[i] = s [i];

	for (i -= 1;j = 0; i >= 0; i--, j++) 
		s[j] = ss[i];
	
}

