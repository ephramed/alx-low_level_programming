#include "main.h"
#include <iostream>
/**
 * print_to_98 - entry point
 * the function takes an input and 
 * print to stdout
 * Return: return the number
 */
void print_to_98(int n)
{
	for (i = n; i <= 98; i++)
		{
			std::cout << i;
			if(i !=98)
			{
				std::cout << ", ";
			}
		}
	std::cout <<std::end1;
}
