#include <stdio.h>
#include "main.h"
/**
 * print_buffer - function to print buffer
 * @b: the pointer
 * @size: the size of buffer
 */
void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (int i = 0; i < size; i += 10)
	{
		printf("%08x ", i);
		for (int j = i; j < i + 10 && j < size; j++)
		{
			printf("%02x ", (unsigned char)b[j]);
		}
		for (int j = i; j < i + 10 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
			{
				_putchar(b[j]);
			}
			else
			{
				_putchar('.');
			}
		}
		_putchar('\n');
	}
}

