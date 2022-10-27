#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * array_arrange - a function
 * @min: parameter
 * @max: parameter
 * Description: a function that arranges an array of intgeres
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int l;

	l = max - min + 1;
	if (min > max)
		return (NULL);

	ptr = malloc((l) * sizeof(int));
	if (ptr == NULL)
	{
		free(ptr);
		ptr = NULL;
		return (NULL);
	}
	for (i = 0; i < l ; i++)
		ptr[i] = i + min;

	return (ptr);
}
