#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_dog - function
 * @d: parameter
 *
 * Description: a function that free
 * Return: void
 */
void free_dog(dog_t *d)
{
if (d == NULL)
{
free(d)
d = NULL;
exit(0);
}
free(d->name);
free(d->owner);
free(d);
d = NULL;
}
