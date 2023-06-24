#include "main.h"
/**
 * print_diagonal - entry point
 * @n: input
 * @i: counter 
 * function print diagonal
 * Return: returns 0 success
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 1)
	{
		_putchar('n');
	}
	else
	{
		for (i = 1; i < n; i++)
		{
			_putchar(92);
		}
		_putchar('\n');
	}
}
