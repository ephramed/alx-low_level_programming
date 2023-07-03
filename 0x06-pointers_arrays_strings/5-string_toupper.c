#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase to uppercase
 *
 * Return: return the new value of str 
 */
char *string_toupper(char *)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
	}
	return (str);
}
