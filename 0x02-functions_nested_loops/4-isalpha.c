#include "main.h"
/**
 * _isalpha - entry point
 * @c: the test operand
 * Return: return 1 if true, 0 if false
 *
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
	{
		/* if true */
		return (1);
	}
	else
	{
		/* if false */
		return (0);
	}
}
