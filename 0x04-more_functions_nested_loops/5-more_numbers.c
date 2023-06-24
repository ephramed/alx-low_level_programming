#include "main.h"
/**
 * more_numbers - entry point
 * @i - first counter
 * @j - second conter
 * the function counts from 0-14
 *  and creates a new line
 * Return: return 0 (success)
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
		}

		_putchar('n');
	}
	return (0);
}
