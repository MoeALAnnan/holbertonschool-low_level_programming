#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - a function
 * @h: a pointer to the head of the list
 *
 * Return: size of the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t counter;

	ptr = h;
	counter = 0;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		counter++;
	}
	return (counter);
}
