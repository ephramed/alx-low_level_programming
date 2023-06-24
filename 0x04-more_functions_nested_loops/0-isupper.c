#include "main.h"
/**
 * _isupper - entry point
 * @c: operand
 * the function check for uppercase character
 * Return: return 1 if true
 * return 0 if false
 */
int _isupper(int c)
{
	if (c > 'A' && c < 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
