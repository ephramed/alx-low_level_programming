#include <stdio.h>
/**
 * main - entry point
 * the function print using putchar
 * single digit of base 10 numbers
 * to the output
 * Return: return 0 (success)
 */
int main(void)
{
	int b;

	for (b = 0; b <= 9; b++)
	{
		putchar(b + '0');
		putchar('\n');
	}
	return (0);
}
