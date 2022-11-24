#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_dnodeint_end - function
 *@head: parameter
 *@n: parameter
 *Description: a function that adds a node at the head
 *Return: an _dlistint_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/**
	 * if head is null create a new node
	 * make the head point to the new node
	 * assign 0 to previous and next pointer
	 */
	dlistint_t *newNode, *counter;

	newNode = malloc(sizeof(dlistint_t));
	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = newNode;
		newNode->n = n;
		newNode->prev = 0;
		newNode->next = 0;
	}
	else
	{
		counter = *head;
		while (counter->next != 0)
			counter = counter->next;

		counter->next = newNode;
		newNode->n = n;
		newNode->prev = counter;
		newNode->next = 0;

	}

	return (newNode);


}
