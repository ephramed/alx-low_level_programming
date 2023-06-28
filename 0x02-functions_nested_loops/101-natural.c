#include "main.h"
/**
 * sum_naturals - function that sum naturals
 * @n: first operand
 * Return: return (0) success
 * some example:
 * sum_naturals(1024);
 */
void sum_naturals(int n)
{
	int i;
	/* value to store and add natural numbers */
	int k = 0;

	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			_putchar(i + '0');
			_putchar('\n');
			k = k + i;
		}
		else
		{
			continue;
		}
	}
	_putchar(k + '0');
	_putchar('\n');
}
/**
 * main - entry point
 * Return: return (0) success
 */
int main(void)
{
	sum_naturals(1024);
	return (0);
}
