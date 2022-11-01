#include <stdio.h>
#include "main.h"
/**
* main - check the code
*
* Return: Always 0.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index == 64 || n == 0)
	{
		return(-1);
	}
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	return (1);
}
