#include "main.h"
/**
* print_alphabet_x10 - Prints the alphabet 10 times.
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
char c;
int i = 0;
while (i < 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
i++;
}
}
