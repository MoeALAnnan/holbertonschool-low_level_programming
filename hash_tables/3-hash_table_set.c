#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
unsigned long int ht_length(hash_table_t *table)
{
	return (table->size);
}
hash_node_t *ht_pair(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(node));

	node->key = malloc(sizeof(key) + 1);
	node->value = malloc(sizeof(value) + 1);
	node->key = strdup((char *)key);
	node->value = strdup((char *)value);
	node->next = NULL;

	return (node);
}
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = ht_length(ht);
	unsigned long int index = key_index((const unsigned char *)key, i);
	hash_node_t *node = ht->array[index];
	hash_node_t *temp;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
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
			strcpy(node->value, value);
			return (1);
		}
		temp = node;
		node = temp->next;

	}
	temp->next = ht_pair(key, value);
	return (1);
}
