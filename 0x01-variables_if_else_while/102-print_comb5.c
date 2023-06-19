#include <stdio.h>
/**
 * main - entry point
 * The programme print all single digit
 * possible combination
 * Return: return 0 (success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 9; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				for (d = 0; d <=9; d++)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					if ( a != 9  || b != 9 || c != 9 || d != 9 )
					{
						putchar(',');
					}
				putchar('\n');
				}
			}
		}
	}
	return (0);
}
