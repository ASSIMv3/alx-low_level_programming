#include "lists.h"

/**
 * free_listint2 - Frees a list
 * @head: Pointer to a pointer to the head of the list.
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = current->next;
		free(current);
	}
	*head = NULL;
}
