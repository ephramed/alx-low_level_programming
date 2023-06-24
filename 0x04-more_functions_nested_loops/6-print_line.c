#include "main.h"
/**
 * print_line - entry point
 * @n - input
 * function print lines
 * Return: returns 0 success
 */
void print_line(int n)
{
	int i;

	if ( n <= 0)
	{
		_putchar('n');
	}
	else
	{
		for (i = 1; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
