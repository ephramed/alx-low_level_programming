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

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(',');
			putchar('\n');
		}
	}
	return (0);
}

