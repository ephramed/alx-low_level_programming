#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * The function generate a random number n
 * and then take last number and compare.
 * Return: return 0 (success)
 */
int main(void)
{
	/* first operand */
	int n;

	/* second operand */
	int last_digit;

	srand(time(0));
	/* formula for the random number generation */
	n = rand() - RAND_MAX / 2;

	/* formula for getting the last digit of n */
	last_digit = n % 10;

	if (last_digit >= 5)
	{
		printf("last digit of ");
		printf("%d is %d and is greater than 5 and not 0 \n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("last digit of %d is %d and is 0 \n", n, last_digit);
	}
	else
	{
		printf("Last digit of ");
		printf("%d is %d and is less than 6 and not 0 \n", n, last_digit);
	}

	return (0);
}
