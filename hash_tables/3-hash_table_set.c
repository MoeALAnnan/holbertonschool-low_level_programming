#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * ht_pair - function
 * @key: key
 * @value: value
 * Description: a function that fills key and value
 * Return: pointer of type hash_node_t
 */
hash_node_t *ht_pair(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(node));

	node->key = malloc(sizeof(key) + 1);
	if (node->key == NULL)
	{
		free(node->key);
		return (0);
	}
	node->value = malloc(sizeof(value) + 1);
	if (node->value == NULL)
	{
		free(node->value);
		return (0);
	}
	node->key = strdup((char *)key);
	node->value = strdup((char *)value);
	node->next = NULL;

	return (node);
}
/**
 * hash_table_set - function
 * @ht: hash table
 * @key: key
 * @value: value
 * Description: a function that insert key/value pair
 * Return: integer
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *node = ht->array[index];
	hash_node_t *temp;

	while (ht)
	{

		if (strcmp(key, "") == 0 || key == NULL)
			return (0);

		if (node == NULL)
		{
			ht->array[index] = ht_pair(key, value);
			return (1);
		}

		while (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
			{
				free(node->value);
				node->value = malloc(strlen(value) + 1);
				if (node->value == NULL)
				{
					free(node->value);
					return (0);
				}

				strcpy(node->value, value);
				return (1);
			}
			temp = node;
			node = temp->next;

		}
		temp->next = ht_pair(key, value);
		return (1);
	}
	return (0);
}
