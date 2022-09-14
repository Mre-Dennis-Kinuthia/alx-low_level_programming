#include <stdio.h>
#include "main.h"
/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
int counter, size;
size = sizeof(str) / sizeof(int);
for (counter = 0; counter < size; counter++)
{
_putchar(str[counter]);
}
_putchar('\n');
return (0);
}
