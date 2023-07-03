#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * leet - entry point
 * @str: the string to be converted
 * Return: return the coverted string to leet
 */

char *leet(char *str)
{
	int i, j;
	char leet_rep[] = "4433007711";
	char letters[] = "aAeEoOtTlL";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet_rep[j];
				break;
			}
		}
	}

	return (str);
}
