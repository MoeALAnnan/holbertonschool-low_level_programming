#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - a function
 * @h: paramete
 * Description: a function that prints elements of a list
 * Return: 2 on success
 */
size_t print_list(const list_t *h)
{
	const list_t *p;
	size_t n;
	size_t i = 0;

	i = 0;
	n = 0;
	p = h;
	while (p != NULL)
	{
		n++;
		p = p->next;
	}
	while (i < n)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}

	return (n);
}
