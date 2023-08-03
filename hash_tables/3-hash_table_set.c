# include "hash_tables.h"
/**
 * hash_table_set - that adds an element to the hash table
 * @ht: address of the hash table
 * @key: key
 * @value: new value
 * Return: Always 1 (Success)
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	char *dupK, *dupV;
	hash_node_t *srch = NULL, *new = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	idx = key_index((unsigned char *) key, ht->size);
	srch = ht->array[idx];

	if (srch && strcmp(key, srch->key) == 0)
	{
		free(srch->value);
		srch->value = strdup(value);
		return (1);
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	dupK = strdup(key);
	if (!dupK)
	{
		free(new);
		return (0);
	}

	dupV = strdup(value);
	if (!dupV)
	{
		free(new);
		return (0);
	}

	new->key = dupK;
	new->value = dupV;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
