#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * infinite_add - add n1 and n2
 * @r: holds result temporary
 * @size_r: is the size of the buffer
 * @n1: first number
 * @n2: second number
 * Return: return the result r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, sum;
	int carry = 0;

	for (i = strlen(n1) - 1, j = strlen(n2) - 1; i >= 0; i--, j--, size_r--)
	{
		sum = carry + (i >= 0 ? n1[i] - '0' : 0) + (j >= 0 ? n2[j] - '0' : 0);
		if (size_r <= 0 || sum > 9)
		{
			return (0);
		}
		r[size_r - 1] = sum + '0';
		carry = sum > 9;
	}
	if (carry || size_r <= 0)
	{
		return (0);
	}
	r[size_r] = '\0';

	return (r);
}
