#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct listint_s - A singly-linked list node structure
 * @n: An integer value stored in the node
 * @index: The index or position of the node in the list
 * @next: A pointer to the next node in the list
 *
 * Description: This structure defines a node in a singly-linked list.
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

int linear_search(int *array, size_t size, int value);
int recursive_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int _binary_search(int *array, size_t left, size_t right, int value);
int exponential_search(int *array, size_t size, int value);
void printArray(int *array, size_t start, size_t end);
int binary_search_v3(int *array, int value, size_t start, size_t end);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* H */
