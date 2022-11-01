#include <stdio.h>
#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: number to be converted to binary first
* @index: position of bit in binary number
* Return: bit at index, or -1 if error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64 || n == 0)
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
