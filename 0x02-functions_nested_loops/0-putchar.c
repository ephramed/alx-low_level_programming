#include "_putchar.c"
#include <string.h>

/**
 * main - entry point
 *
 *
 * 
 * Return: return 0 (success)
 */

int main(void)
{

	char pu[]="_putchar\n";
	
	int i=0;
	while (i < strlen(pu))
	{
		_putchar(pu[i]);
		i++;
	}

	return (0);
}
