#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - a function
 * @str: parameter
 * @head: parameter
 * Description: a function that prints elements of a list
 * Return: pointer on success;
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *lastNode;

	newNode = malloc(sizeof(list_t));
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (newNode == NULL)
	{
		free(newNode);
		newNode = NULL;
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newNode;
			return (*head);
	}
	else
	{	lastNode = *head;
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}

		lastNode->next = newNode;
	}
return (lastNode);
}
