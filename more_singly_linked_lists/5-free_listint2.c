#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function
 * @head: a head pointer to list
 * Description: a function that frees single linked list
 * it sets head pointer to NULL
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	else
	{
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
	}
}
