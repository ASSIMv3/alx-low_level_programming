#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index `index` of a linked list
 * @head: A pointer to a pointer to the first node in the list.
 * @index: The index of the node to delete.
 * Return: 1 if the node was deleted successfully, or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node, *node_to_delete;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		node_to_delete = *head;
		*head = (*head)->next;
		free(node_to_delete);
		return (1);
	}

	prev_node = *head;

	for (i = 0; i < index - 1 && prev_node->next != NULL; i++)
		prev_node = prev_node->next;

	if (i < index - 1 || prev_node->next == NULL)
		return (-1);
	node_to_delete = prev_node->next;
	prev_node->next = node_to_delete->next;
	free(node_to_delete);

	return (1);
}
