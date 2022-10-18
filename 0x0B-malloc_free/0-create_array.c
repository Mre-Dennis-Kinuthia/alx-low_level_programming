#include "main.h"
#include <stdlib.h>
/**
* *create_array - creates an array of chars,
*                 and initializes it with a specific char
* @size: size of array
* @c: specific char
*
* Return: pointer to the array, NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
str = malloc(sizeof(char) * size);
if (size == 0)
{
return (NULL);
}
else if (str == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{	  
str[i] = c;
}
}
return (str);
}
