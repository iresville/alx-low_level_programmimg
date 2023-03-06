#include "main.h"
#include <string.h>
/**
*_memset: Fills memory with a constant byte
*@s: puts a char s
*@b: puts a char b
*@n: puts an integer n
*
*Returns: Pointer to memory area
*/
char *_memset(cahr *s, char b, unsigned int n)
{
	int i = 0;
	for (n = 0; n > 0; i++)
	{    
		s[i] = b;
		n--;
	}
	return (s);  
}
