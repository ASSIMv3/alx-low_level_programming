#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_search - Searches for a value in a sorted array using jump search algo
 *
 * @array: Pointer to the sorted array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, end, i;

	if (!array)
		return (-1);

	end = 0, i = sqrt(size);
	while (end < size)
	{
		if (array[end] >= value)
			break;
		start = end, end += i;
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	if (end >= size)
		end = size - 1;

	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
