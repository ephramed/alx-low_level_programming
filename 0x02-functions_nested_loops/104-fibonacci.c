#include "main.h"
/**
 * main - entry position
 * the function prints first 98 series in fibonnaci
 * series seperated by comma followed by spac
 * Return: return 0 (success)
 */
int main(void)
{
	/* counter */
	int i;
	/* variables to hold the values */
	int j, k, l, m;

	/* initializer */
	j = 0;
	k = 1;
	for (i = 0; i < 98; i++)
	{
		l = j + k;
		_putchar(l + '0');
		_putchar(44);
		_putchar(32);
		j = k;
		k = l;
	}

	return (0);
}
