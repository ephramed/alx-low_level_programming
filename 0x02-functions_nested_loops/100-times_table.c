#include "main.h"
/**
 * print_times_table - entry point
 * @n : first operand
 * Function print multiple tables
 * Return: return multiplication of numbers
 * less than n
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar(i * j + '0');
			_putchar(44);
			_putchar(11);
		}
		_putchar('\n');
	}
}
