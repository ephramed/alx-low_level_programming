#include <stdio.h>
/**
 * main - entry point
 * the programme write all the numbers
 * of the hexadecimal on a new line
 * Return: return 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 15; a++)
	{
		if (a < 10)
		{
			putchar(a + '0');
		}
		else
		{
			putchar(a - 10 + 'A');
		}
		putchar('\n');
	}
	return (0);
}
