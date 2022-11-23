#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - a function
 * @h: parameter
 * Description: print nodes
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	/*declare a pointer to make it traverse the function*/
	const dlistint_t *ptr;
	size_t number_of_nodes;

	number_of_nodes = 0;
	ptr = h;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		number_of_nodes++;
	}
	return (number_of_nodes);

}
