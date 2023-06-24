#include "main.h"
/**
 * print_most_numbers - entry point
 * @n - first operand
 * the function prints 0-9
 * but skips 2 & 4
 * Return: return void
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n == 2 && n == 4)
		{
			continue;
		}
		else
		{
			_putchar(n + '0');
		}
		putchar('n');
	}
}
