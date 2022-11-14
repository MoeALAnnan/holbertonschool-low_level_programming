#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - a function
 * @h: paramete
 * Description: a function that counts elements in a list
 * Return: 2 on success
 */
size_t list_len(const list_t *h)
{
	size_t n;
	const list_t *p;

	n = 0;
	p = h;
	while (p != NULL)
	{
		p = p->next;
		n++;

	}
	return (n);
}
