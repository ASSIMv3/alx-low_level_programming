#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head
 * @idx: index of the list
 * @n: data for the new node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current, *new_node;

	if (head == NULL)
		return (NULL);

	current = *head;

	while (i < idx - 1)
	{
		if (current == NULL)
			return (NULL);

		current = current->next;
		i++;
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = current->next;
		current->next = new_node;
	}
	return (new_node);
}
