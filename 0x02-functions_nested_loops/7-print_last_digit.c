#include "holberton.h"
/**
*print_last_digit- function that prints the last digit of a number
*@n: n is an integer
*Description print the last digits of a number
*Return: Always 0.
*/
int print_last_digits(int a)
{
int last = n % 10;

if (n < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
