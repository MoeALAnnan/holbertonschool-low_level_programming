#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a function
 * @d: parameter
 * @name: parameter
 * @age: parameter
 * @owner: owner
 * Description: a function that initializes a variable of type structure dog
 * Return: pointer to a pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		exit(ok);
	d->name = name;
	d->age = age;
	d->owner = owner;

}
