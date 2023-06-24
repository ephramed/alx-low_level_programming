#include <stdio.h>
#include <math.h>
/**
 * largestPrimeFactor - entry point
 * the program finds and prints the largest prime factor
 * @i: counter
 * @largestFactor: is the divisor
 * Return: return o success
 */
unsigned long long largestPrimeFactor(unsigned long long number)
{
	unsigned long long largestFactor = 1;

	while (number % 2 == 0)
	{
		largestFactor = 2;
		number /= 2;
	}
	unsigned long long sqrtNum = (unsigned long long) sqrt(number);
	unsigned long long i;

	for (i = 3; i <= sqrtNum; i += 2)
	{
		while (number % i == 0)
		{
			largestFactor = i;

			number /= i;
		}
	}
	if (number > 2)
	{
		largestFactor = number;
	}
	return largestFactor;
}
int main(void)
{
	unsigned long long number = 612852475143;
	unsigned long long largestFactor = largestPrimeFactor(number);
	printf("%llu\n", largestFactor);
	return (0);
}
