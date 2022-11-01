#include <stdio.h>
#include "main.h"

/**
* clear_bit - sets the value of a bit at a given index to 0
* @n: number to be converted to binary first
* @index: position of bit in binary number
* Return: 1 if it worked, -1 if error occured
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (*n == 0 || index >= 64)
		return (-1);

	*n = *n & (~(1 << index));
		return (1);
}
