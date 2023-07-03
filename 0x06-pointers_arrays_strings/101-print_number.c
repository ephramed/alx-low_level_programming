#include <stdio.h>
#include "main.h"
/**
 * print_number -use _putchar to print integers
 * @n: the variable for the integer length
 */
void print_number(int n)
{
	char str[12];
	int i = 0;

	/* for numbers that are zero */
	if (n == 0)
	{
		_putchar('0');
	}
	if (n > 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n > 0)
	{
		str[i++] = n % 10 + '0';
		n /= 10;
	}
	while (i > 0)
	{
		_putchar(str[--i]);
	}
	_putchar('\n');
}
