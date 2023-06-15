#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head node
 * Return: number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
