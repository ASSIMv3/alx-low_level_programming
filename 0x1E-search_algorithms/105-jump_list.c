#include "search_algos.h"
#include <math.h>
/**
 * jump_list - Searches for a value in a singly linked list using jump search
 *
 * @list: Pointer to the head of the linked list
 * @size: Number of elements in the linked list
 * @value: Value to search for
 *
 * Return: Pointer to the first node containing the value, otherwise NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int step = 0, i = 0;
	listint_t *tmp = NULL;

	if (list && size > 0)
	{
		step = sqrt(size);
		while (value > list->n && list->next)
		{
			tmp = list;
			for (i = 0; i < step && list->next; i++)
				list = list->next;
			printf("Value checked at index [%ld] = [%d]\n", list->index,
			       list->n);
		}
		printf("Value found between indexes [%ld] and [%ld]\n",
		       tmp->index, list->index);
		while (tmp && tmp->index <= list->index)
		{
			printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);
			if (value == tmp->n)
				return (tmp);
			tmp = tmp->next;
		}
	}
	return (NULL);
}
