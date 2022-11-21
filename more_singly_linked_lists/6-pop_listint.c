#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - function
 * @head: pointer to a the head of the function
 * Description: a function that deletes the header node
 * Return: header data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}

