#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_grid - a function
 * @grid: parameter
 * @height: parameter
 * Description: a function that frees up memory
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;
	int *currentIntPtr;

	for (i = 0; i < height; i++)
	{

		currentIntPtr = grid[i];
		free(currentIntPtr);

	}
}
