#include <stdio.h>
/**
 * main - entry point
 * The programme print all three digit
 * possible combination
 * Return: return 0 (success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if ( a != 9  || b !=9 || c != 9 )
					{
						putchar(',');
					}
				putchar('\n');
			}
		}
	}
	return (0);
}

