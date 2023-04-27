#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to head of list
 * @str: string to be duplicated and added to new node
 * Return: address of new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	len = 0;
	while (str[len])
		len++;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
