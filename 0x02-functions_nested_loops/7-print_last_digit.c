#include <stdio.h>
#include <stdlib.h>
/**
*print_last_digit- function that prints the last digit of a number
*@n: n is an integer
*Return: the last digit
*/
int print_last_digits(int num)
{
int last = num % 10;
if (num < 0)
{
last_digits = -last_digits;
}
_putchar(last + '0');
return (last);
}
