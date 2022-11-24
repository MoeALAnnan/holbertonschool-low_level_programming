#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *get_dnodeint_at_index - function
 *@head: parameter
 *@index: parameter
 *Description: a function that adds a node at the head
 *Return: an _dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *counter;

	counter = head;
	i = 0;

	if (counter != 0 && counter->next != 0)
	{
		while (i < index)
		{
			counter = counter->next;
			i++;
		}
		return (counter);
	}
	else
		return (NULL);
}
