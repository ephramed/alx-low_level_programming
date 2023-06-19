#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* stdlib: for importing standard lib
* time: for time reference
* stdio: standard input and output
* Return: return 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	 * prints n is positive if >0
	 * prints n is negative if <0
	 * prints n is zero if ==0
	 */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
