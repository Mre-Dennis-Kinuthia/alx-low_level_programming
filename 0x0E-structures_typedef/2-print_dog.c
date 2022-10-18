#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
* print_dog - prints struct dog with the elements initialized
*           - if an element is empty, print (nil)
*           - if d is NULL, print nothing
* @d: structure to be printed
* Return: nothing
*/
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
if (d->age < 0)
printf("Age: (nil)\n");
else
printf("Age: %f\n", d->age);
if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
