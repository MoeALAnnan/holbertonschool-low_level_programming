#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function
 * @head: pointer to a head node
 * @index: number of the node
 * Description: a function that retrives data from specified node
 * Return: data from specified node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	i = 0;
	temp = head;
	if (temp->next != NULL)
	{
		while (i < index)
		{
			temp = temp->next;
			i++;
		}
	return (temp);
	}
	else
	return (NULL);
}
