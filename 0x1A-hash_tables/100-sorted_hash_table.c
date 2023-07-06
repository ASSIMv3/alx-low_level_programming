#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the hash table
 *
 * Return: A pointer to the created sorted hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Adds or updates a key/value pair in a sorted hash table
 * @ht: The sorted hash table
 * @key: The key to add or update
 * @value: The corresponding value
 *
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	node->sprev = NULL;
	node->snext = NULL;
	ht->array[index] = node;
	if (ht->shead == NULL || strcmp(key, ht->shead->key) < 0)
	{
		node->snext = ht->shead;
		if (ht->shead != NULL)
			ht->shead->sprev = node;
		ht->shead = node;
		if (ht->stail == NULL)
			ht->stail = node;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(key, temp->snext->key) > 0)
			temp = temp->snext;
		node->snext = temp->snext;
		node->sprev = temp;
		if (temp->snext != NULL)
			temp->snext->sprev = node;
		temp->snext = node;
		if (node->snext == NULL)
			ht->stail = node;
	}
	return (1);
}

/**
 * shash_table_get - Retrieves the value associated
 *			with a key in a sorted hash table
 * @ht: The sorted hash table
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if key is not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}

/**
* shash_table_print - Prints the sorted hash table in order
* @ht: The sorted hash table
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (node = ht->shead; node != NULL; node = node->snext)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->snext != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
* shash_table_print_rev - Prints the sorted hash table in reverse order
* @ht: The sorted hash table
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (node = ht->stail; node != NULL; node = node->sprev)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->sprev != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
* shash_table_delete - Deletes a sorted hash table
* @ht: The sorted hash table to delete
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
