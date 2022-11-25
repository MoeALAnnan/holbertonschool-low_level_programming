#include "hash_tables.h"

/**
 * key_index - a function.
 * @key: key used to generate index
 * @size: size of the hash table
 *
 * Return: index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || size <= 0)
		return (0);
	return (hash_djb2(key) % size);
}

