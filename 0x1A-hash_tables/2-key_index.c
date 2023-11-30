#include "hash_tables.h"

/*
 * key_index - Get the index for a given key in a hash table
 * @key: The key string
 * @size: The size of the hash table
 *
 * Return: The index in the hash table where the key should be stored
 *
 * Description:
 *   This function uses the djb2 hash algorithm to calculate the hash value
 *   for the given key and then computes the index in the hash table by taking
 *   the modulo of the hash value with the size of the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
