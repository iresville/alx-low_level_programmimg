#include "main.h"
/**
*puts_half - a function that prints half of a string
*if odd len, n = (length_of_the_string - 1) / 2
*@str: input
*Return: half of input
*/
void puts_half(char *str)
{
	int len, n, v;

	len  = strlen(str);

	n = (len / 2);
        if (len % 2 != 0)
	{
	n = (len - 1) / 2;
        }
	for (v = n; v < len;  v++)
	{
	_putchar (str[v]);
	}
	_putchar('\n');
}
