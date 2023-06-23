#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - entry point
 *
 * Function print a to z
 * Return: retunr (0) success
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar("\n");
	return (0);
}

