#include <iostream>
#include "bubl_sort.h"
#include "print_mass.h"

int main()
{
	int arr[] = { 30, 40 ,30 ,33 , 50, 10 , 40 ,40 };
	int size = sizeof(arr) / sizeof(arr[0]);
	print_mass(arr, size);
	bubl_sort(arr, size);
	print_mass(arr, size);
	return 0;
}