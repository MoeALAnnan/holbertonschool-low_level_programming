#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Structure data type
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: pet identifier
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *var;
	char *name1;
	char *owner1;

	var = malloc(sizeof(dog_t));
	if (var == NULL)
	{
		free(var);
		var = NULL;
		return (NULL);
	}
		name1 = malloc(sizeof(char) * strlen(name) + 1);
	if (name1 == NULL)
	{
		free(name1);
		name1 = NULL;
		free(var);
		var = NULL;
		return (NULL);
	}
	strcpy(name1, name);

	owner1 = malloc(sizeof(char) * strlen(owner) + 1);
	if (owner1 == NULL)
	{
		free(owner1);
		owner1 = NULL;
		free(name1);
		name1 = NULL;
		free(var);
		var = NULL;
		return (NULL);
	}

	strcpy(owner1, owner);
	var->name = name1;
	var->age = age;
	var->owner = owner1;

	return (var);
}
