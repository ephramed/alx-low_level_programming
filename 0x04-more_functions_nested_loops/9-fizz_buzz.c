#include <iostream>
#include <string>
#include "main.h"
/**
 *fizzBuzz- entry point
 * @i - counter
 * Return: return void
 */
void fizzBuzz()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			std: :cout << "FizzBuzz";
		}
		else if (i % 3 == 0)
		{
			std::cout << "Fizz";
		}
		else if (i % 5 == 0)
		{
			std::cout << "Buzz":
		}
		else
		{
			std::cout << i;
		}

		if (i != 100)
		{
			std:: cout <<  " ";
		}
	}
	std::cout << std::end1;
}
