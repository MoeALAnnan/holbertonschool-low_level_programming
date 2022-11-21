#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - a function
 * @head: parameter
 * @n: parameter
 * Description: to be filled
 * Return: to be filled
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*we creat a new node*/
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		free(newNode);
		newNode = NULL;
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
		/*we set the head to be equal to newNode*/
		*head = newNode;
	else

	{
		listint_t *temp;

		temp = *head;
		while (temp->next != NULL)
		{
		temp = temp->next;
		}

		temp->next = newNode;
	}
	return (newNode);
}


