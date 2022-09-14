#include <stdio.h>
/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int main(void){
int str[] = {95, 112, 117, 116, 99, 104, 97, 114};

int counter, size;

size = sizeof(str) / sizeof(int);

for (counter = 0; counter < size; counter++){

putchar(str[counter]);
}
putchar('\n');
return (0);
}
