#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * count - a function
 * @p: paramete
 * Description: a function that counts node
 * Return: 2 on success
 */
int count(list_t *p)
{
	int c;

	c = 0;

	while (p != NULL)
	{
		c++;
		p = p->next;
	}
	return (c);
}
/**
 * print_list - a function
 * @h: paramete
 * Description: a function that prints elements of a list
 * Return: 2 on success
 */
size_t print_list(const list_t *h)
{
int n;
n = 1 + count(h->next);
if (h->str == NULL)
printf("[%d] (nil)\n", h->len);
else if (h->next->str == NULL)
printf("[%d] (nil)\n", h->next->len);
else
printf("[%d] %s\n", h->len, h->str);
printf("[%d] %s\n", h->len, h->next->str);
return (n);
}
