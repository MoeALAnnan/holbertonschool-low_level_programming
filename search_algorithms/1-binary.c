#include "search_algos.h"
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, mid;

	l = 0;
	r = size - 1;

	while (l < r)

	{
		printf("Searching in array: ");
		for (mid = l; mid < r; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);
		mid = (l + r) / 2;
		if (value == array[mid])
			return (mid);

		else if (value < array[mid])

			r = mid - 1;
		else
			l = mid + 1;
	}

	return (-1);
}
