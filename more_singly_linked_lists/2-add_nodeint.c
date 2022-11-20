#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - a function
 * @head: a pointer to a points to the new node
 * @n: the data to be added
 * Description: adds a node at the beginning of the linked list
 * Return: the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		newNode = NULL;
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
