#include "print_mass.h"
#include <iostream>


void print_mass(const int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << '	';
	}
	std::cout << std::endl << std::endl;
}