#include "hash_tables.h"


shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *stable = malloc(sizeof(shash_table_t) + sizeof(shash_node_t *) * size);
	unsigned int i;

	if (!stable)
		return NULL;

	stable->shead = stable->stail = NULL;
	stable->size = size;

	stable->array = (shash_node_t **)(stable + 1);

	for (i = 0; i < size; i++)
		stable->array[i] = NULL;

	return stable;
}

shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *node = malloc(sizeof(shash_node_t));

	if (!node)
		return NULL;

	node->key = strdup(key);
	node->value = strdup(value);

	if (!node->key || !node->value) {
		free(node->key);
		free(node->value);
		free(node);
		return NULL;
	}

	node->snext = node->sprev = node->next = NULL;

	return node;

}

int add_to_sorted_list(shash_table_t *sht, const char *key, const char *value)
	{
		shash_node_t *node, *tmp;

		node = create_node(key, value);
		if (!node)
			return 0;

		if (!sht->shead)
		{
			sht->shead = sht->stail = node;
			return 1;
		}
		tmp = sht->shead;
		while (tmp)
		{
			if (strcmp(tmp->key, node->key) > 0)
			{
				node->snext = tmp;
				node->sprev = tmp->sprev;
				tmp->sprev = node;
				if (node->sprev)
					node->sprev->snext = node;
				else
					sht->shead = node;
				return 1;
			}
			tmp = tmp->snext;
		}

		node->sprev = sht->stail;
		sht->stail->snext = node;
		sht->stail = node;

		return 1;
	}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
	{
		unsigned int i, index;
		shash_node_t *newnode, *tmp; 

		newnode = create_node(key, value);
	


		add_to_sorted_list(ht, key, value);
		return 0;
	}

char *shash_table_get(const shash_table_t *ht, const char *key);

void shash_table_print(const shash_table_t *ht);

void shash_table_print_rev(const shash_table_t *ht);

void shash_table_delete(shash_table_t *ht);
