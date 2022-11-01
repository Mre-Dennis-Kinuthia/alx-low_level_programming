#include <stdio.h>
#include "main.h"
/**
* main - check the code
*
* Return: Always 0.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == 0 || index >= 64)

		return (-1);

	else
	{
		*n = *n | (1 << index);

return (1);
	}
}
