#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	unsigned int i;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "omar", "NULL");
	hash_table_set(ht, "tata", "zxcz");
	hash_table_set(ht, "nanan", "hgnhg");
	hash_table_set(ht, "ovvaa", "asa");
	hash_table_set(ht, "koka", "lkmk");

	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;
		printf("%u %s = %s\n", i, ht->array[i]->key, ht->array[i]->value);
	}



	return (EXIT_SUCCESS);
}
