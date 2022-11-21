#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - function
 * @head: head of single linked list
 * Description: a function that adds data in a list
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int n;
	listint_t *temp;

	/**
	 * temp = head;
	 *n = temp->n;
	 */
	if (head == NULL)
	{
		return (0);
	}
	temp = head;
	n = temp->n;

	while (temp->next != NULL)
	{
		temp = temp->next;
		n = n + temp->n;
	}
	return (n);
}
