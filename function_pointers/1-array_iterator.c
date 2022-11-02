#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - a function
 * @array: pointer to an array of integers
 * @size: size of the array
 * @action: function pointer that points to a function that needs execution
 *
 * Description: that executes a function given
 * as a parameter on each element of an array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		exit(1);
	for (i = 0; i < size; i++)
		action(array[i]);

}
