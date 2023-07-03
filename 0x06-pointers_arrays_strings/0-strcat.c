#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * *_strcat - the function concatenate
 * src on dest
 *
 * Return: return the concated string
 */
char *_strcat(char *dest, char *src)
{
	int n = 0;
	while ( dest[n] != '\0')
	{
		n++;
	}
	for (int i = 0; src[i] != '\0'; i++)
	{
		dest[n] = src[i];
		n++;
	}
	dest[n] = '\0';
	return(dest);
}

