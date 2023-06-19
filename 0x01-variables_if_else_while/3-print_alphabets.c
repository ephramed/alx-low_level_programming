#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * the code print lowercase letter to
 * to uppercase letter then a new line
 * Return: return0 (success)
 */
int main(void)
{
	char c;
	char low;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar(toupper(c));
		putchar('\n');
	}
	return (0);
}

