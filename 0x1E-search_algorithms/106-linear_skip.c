#include "search_algos.h"
/**
 * linear_skip - Searches for a value in a skip list
 *
 * @list: Pointer to the head of the skip list
 * @value: Value to search for
 *
 * Return: Pointer to the node containing the value, otherwise NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tmp = NULL;

	if (list)
	{
		while (value > list->n && list->next)
		{
			tmp = list;
			list = list->express;
			if (!list)
			{
				list = tmp;
				while (list->next)
					list = list->next;
			}
			if (list != tmp->express)
				break;
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
