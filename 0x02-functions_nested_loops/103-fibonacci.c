#include "main.h"
/**
 * main - entry position
 * the function prints first sequence in fibonnaci
 * series and sum the values
 * Return: return 0 (success)
 */
int main(void)
{
	/* counter */
	int i;
	/* variables to hold the values */
	int j, k, l, m;

	j = 0;
	k = 1;
	/* variable to hold the sum */
	m = 0;
	for (i = 0; i < 50; i++)
	{
		l = j + k;
		j = k;
		k = l;
		if (l % 2 == 0 && l <= 4000000)
		{
			_putchar(l + '0');
			_putchar(44);
			_putchar('\n');
			m = m + l;
		}
		else
		{
			continue;
		}
	}
	_putchar(m + '0');
	_putchar('\n');
	return (0);
}
