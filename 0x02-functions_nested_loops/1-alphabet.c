#include <unistd.h>
#include "main.h"
/**
* Return: Always 0 (Success)
* print_alphabet - prints alphabet
*/

void print_alphabet(void)
{
int alpha;
for (alpha = 97; alpha <= 122; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
