#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: head of the list_t list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);
		count++;
		h = h->next;
	}
	return (count);
}

