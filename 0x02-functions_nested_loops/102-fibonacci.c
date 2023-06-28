#include "main.h"
/**
 * main - entry position
 * the function prints first 50 sequence in fibonnaci
 * series and sum the values
 * Return: return 0 (success)
 *
 */
int main(void)
{
	/* counter */
	int i;
	/* variables to hold the values */
	int j, k, l;

	j = 1;
	k = 2;
	_putchar(j + '0');
	_putchar(k + '0');
	for (i = 0; i < 50; i++)
	{
		l = j + k;
		_putchar(l + '0');
		j = k;
		k = l;
	}
	return (0);
}

