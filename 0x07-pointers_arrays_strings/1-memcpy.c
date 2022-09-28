#include "main.h"
/**
* _memcpy - copies memory area,
* @dest: destination memory area.
* @src: source memory are.
* @n: bytes filled.
* Return : the pointer to dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsinged int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
