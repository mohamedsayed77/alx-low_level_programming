#include "hash_tables.h"

/**
 * make_hash_node - creates a new hash node
 * @key: key to node
 * @value: for the node
 *
 * Return: the new node, or NULL if fail
 */

hash_node_t *make_hash_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));

	if (!node)
		return (NULL);
	node->key = strdup(key);

	if (!node->key)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if  (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - a function that gives the index of a key
 * @ht: hash table to add elemt to
 * @key: key for the data
 * @value: data to store
 *
 * Return: 1 if succes, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_node, *tmp;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		value == NULL || key == NULL || strlen(key) == 0)
			return (0);
	
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);

			if (new_value == NULL)
				return (0);

			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}
	hash_node = make_hash_node(key, value);

	if (!hash_node)
		return (0);
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
}
