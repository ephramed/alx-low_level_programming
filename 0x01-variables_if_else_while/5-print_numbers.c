#include <stdio.h>
/**
 * main - entry point
 * the function print out first
 * single digit of base 10
 * from 0
 * Return: return 0 (success)
 */
int main(void)
{
	/* first operand */
	int c;

	/* loop through 0-9 */
	for (c = 0; c <= 10; c++)
	{
		printf("%d\n", c);
	}
	return (0);
}
