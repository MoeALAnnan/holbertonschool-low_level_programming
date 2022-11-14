#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	const list_t *p;
	size_t n;
	size_t i = 0;

	i = 0;
	n = 0;
	p = h;
	/*n = 1 + count(h->next);*/
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else if (h->next->str == NULL)
		printf("[0] (nil)\n");
	else
		/**if (h->str == NULL)
		  printf("[%d] (nil)\n", h->len);
		  else if (h->next->str == NULL);
		  printf("[%lu] (nil)\n", strlen(h->next->str));*/
		/**printf("[%d] %s\n", h->len, h->str);
		  printf("[%d] %s\n", h->next->len, h->next->str);*/
		printf("[%d] %s\n", h->len, h->str);
	/*printf("[%d] %s\n", h->next->len, h->next->str);*/
	while (p != NULL)
	{
		/*printf("[%d] %s\n", h->next->len, h->next->str);*/
		n++;
		p = p->next;
	}
	while (i < n - 1)
	{
		printf("[%d] %s\n", h->next->len, h->next->str);
		i++;
	}

	return (n);
}
