#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_dnodeint - function
 *@head: parameter
 *@n: parameter
 *Description: a function that adds a node at the head
 *Return: an _dlistint_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/**
	 * if head is null create a new node
	 * make the head point to the new node
	 * assign 0 to previous and next pointer
	 */
	dlistint_t *newNode;

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
		(*head)->prev = newNode;
		newNode->n = n;
		newNode->prev = 0;
		newNode->next = *head;
		*head = newNode;
	}

	return (newNode);


}
