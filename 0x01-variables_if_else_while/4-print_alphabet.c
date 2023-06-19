#include <stdio.h>
/**
 * main - entry point
 *
 * The funcction print alpahbets
 * in lower case except q and e
 * Return: return (0) success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
		{
			continue;
		}
		else
		{
			putchar(c);
			putchar('\n');
		}
	}

	return (0);
}
