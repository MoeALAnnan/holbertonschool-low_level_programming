#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_listint - a function
 * @h: a parameter to be printed
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter;
	const listint_t *ptr;

	counter = 0;
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		counter++;
	}
	return (counter);
}

