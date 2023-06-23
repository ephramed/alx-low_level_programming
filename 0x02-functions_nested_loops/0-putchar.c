#include "main.h"

/**
 * main - entry point
 * print _putchar to stdio
 * Return: return 0 (success)
 */

int main(void)
{
	char puy[] = "_putchar\n";

	int i = 0;

	while (i < 8)
	{
		_putchar(puy[i]);
	}


	return (0);
}
