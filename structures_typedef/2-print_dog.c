#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - a function
 * @d: parameter
 * Description: a function that print struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == 0)
		d->age = 0;
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
