#include "search_algos.h"
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, mid, i;

	l = 0;
	r = size - 1;

	while (l < r)

	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = (l + r) / 2;
		if (value == array[mid])
			return (mid);

		else if (value < array[mid])

			r = mid - 1;
		else if (value > array[mid])
			l = mid + 1;
	}

	return (-1);
}
