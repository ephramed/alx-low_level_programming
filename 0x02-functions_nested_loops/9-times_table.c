#include "main.h"
/**
 *
 *
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i=0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			k= i*j;
			_putchar(k + '0');
			_putchar(32);
			_putchar(32);
			_putchar(44);
		}
		_putchar('\n');
	}
}
