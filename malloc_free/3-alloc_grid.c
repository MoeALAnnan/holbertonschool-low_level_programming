#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - a function
 * @width: parameter
 * @height: parameter
 * Description: a function that returns a pointer to a 2 dimensional array
 * Return: pointer to a pointer
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	array = malloc(height * sizeof(int *));
	if (array == NULL)
		
{
		free(array);
		return (NULL);
}
for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			free(array);
			return (NULL);
		}
			for (j = 0 ; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
