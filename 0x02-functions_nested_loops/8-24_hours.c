#include "main.h"
/**
 * jack_bauer - entry point
 * prints every minute of
 * jack Bauer from
 * 00:00 to 23:59
 * Return: return time
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 24 ; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(i + '0');
			_putchar(58);
			_putchar(j + '0');
			_putchar('\n');

		}
		_putchar('\n');
	}
}

