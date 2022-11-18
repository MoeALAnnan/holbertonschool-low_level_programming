#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - a function
 * @str: parameter
 * @head: parameter
 * Description: a function that prints elements of a list
 * Return: 2 on success
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		free(temp);
		temp = NULL;
		return (NULL);
	}
	temp->next = *head;
	temp->str = strdup(str);
	temp->len = strlen(str);
	*head = temp;

	return (*head);
}
