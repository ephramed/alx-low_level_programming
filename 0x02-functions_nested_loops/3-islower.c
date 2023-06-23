#include "main.h"
/**
 * _islower - entry point
 * @c: the test operand
 * the function return 1 if true
 * return 0 if false
 * Return: 1 if true 0 if false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		/* if c islower = true */
		return (1);
	}
	else
	{
		/* if c islower = false */
		return (0);
	}
}
