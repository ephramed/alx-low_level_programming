#include <stdio.h>
/**
 * main - entry point
 *
 * the loop prints a-z on a new line
 * Return: return 0 (success)
 */
int main(void)
{
	/* first operand */
	char c;

	/* for loop for the counter */
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar('\n');
	}
	return (0);
}

