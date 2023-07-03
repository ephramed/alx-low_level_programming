#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * cap_string - changes the string to caps
 * Return: return the value of str 
 */
char *cap_string(char *)
{
	int cap_next = 1;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (cap_next && isLowCase(str[i]))
		{
			str[i] = 32;
		}
		cap_next = isSeparat(str[i]);
	}
	return (str);
}

/**
 * isLowCase - retrun the string if it is lowercase
 * Return: return the value
 */
int isLowCase(char c)
{
	return (c >= 'a' && c<= 'z');
}

/**
 * isSeparat - checks if there is a separator
 * Return: return 0 (success)
 */
int isSeparat(char c)
{
	const char separators[] = "\t\n,;.!?\"(){}";

	for (int i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}
	return (0);
}
