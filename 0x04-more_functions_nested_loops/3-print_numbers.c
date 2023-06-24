#include "main.h"
/**
 * print_numbers - entry point
 * @n -  operand
 * Return: return 0 (success)
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(n + '0');
	}
	return (0);
}
