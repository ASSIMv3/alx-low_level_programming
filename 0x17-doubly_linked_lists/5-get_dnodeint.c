#include "lists.h"

/**
 * get_dnodeint_at_index - Find the nth node of a dlistint_t linked list
 * @head: head node
 * @index: the node to locate
 * Return: NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
