#include<stdio.h>
#include<stdlib.h>
#include"hash_tables.h"
/**
 * hash_table_create - function
 * @size: size of the array
 * Description: a function that creates a hash table
 * Return: address of the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	/* create an empty table */
	hash_table_t *new_table;

	i = 0;

	new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table->array);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}

	new_table->size = size;

	return (new_table);
}
