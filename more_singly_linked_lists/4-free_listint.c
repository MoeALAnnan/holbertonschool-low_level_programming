#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - function
 * @head: a parameter
 * Description: a function the free linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *currentNode;

	while (head)
	{
		currentNode = head;
		head = head->next;
		free(currentNode);
	}

}
