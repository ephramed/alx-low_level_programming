#include "main.h"
#include <string.h>
/**
 * _strcmp - compares s1 and s2
 *
 * Return: return (0) success
 */
int _strcmp(char *s1, char *s2)
{
	for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] -s2[i]);
		}
	}
	return (0);
}

