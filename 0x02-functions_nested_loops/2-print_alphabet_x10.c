#include "main.h"
/**
 * print_alphabet_x10- entry point
 *
 * the function prints the alphabet
 * x10 and a new line
 *
 * Return: retunr (0) suucess
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar("\n");

		i++;

	}
}

