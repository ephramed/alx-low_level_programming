#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rot13 - encode strings using rot13
 * @str: strings to be encoded
 * Return: return encoded string
 */
char *rot13(char *str)
{
	int i, j;
	/* input letters */
	char inp_letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	/* strings to use to encode input strings */
	char out_letters = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijlm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == inp_letters[j])
			{
				str[i] = out_letters[j];
				break;
			}
		}
	}
	return (str);
}
