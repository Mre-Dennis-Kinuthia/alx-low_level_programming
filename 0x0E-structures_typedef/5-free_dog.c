#include "dog.h"
#include <stdlib.h>
/**
* free_dog - frees dogs
* @d: struct dog
*
* Return: returns nothing
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
