#include "main.h"
#include <stdio.h>
/**
 * *_strncat - concatenate a source string to a destination
 * string
 * Return: retunr the dest value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	/* for end of string */
	while (*dest != '\0')
	{
		dest++;
	}
	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;
	}
	/* null for termination */
	*dest = '\0';

	return (dest);
}
