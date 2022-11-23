#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - a function
 * @h: parameter
 * Description: print number of nodes
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	/*declare a pointer to make it traverse the function*/
	const dlistint_t *ptr;
	size_t number_of_nodes;

	number_of_nodes = 0;
	ptr = h;
	while (ptr)
	{
		ptr = ptr->next;
		number_of_nodes++;
	}
	return (number_of_nodes);

}
