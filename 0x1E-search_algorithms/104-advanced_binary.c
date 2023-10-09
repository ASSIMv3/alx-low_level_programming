#include "search_algos.h"
/**
 * printArray - Prints the elements of an array within a specified range
 *
 * @array: Pointer to the array to print
 * @start: Starting index of the range
 * @end: Ending index of the range
 */
void printArray(int *array, size_t start, size_t end)
{
	size_t j = 0;

	printf("Searching in array: ");
	for (j = start; j <= end; j++)
	{
		printf("%d", array[j]);
		if (j != end)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
}

/**
 * binary_search_v3 -Searches for a value in a sorted array using binary search
 *
 * @array: Pointer to the sorted array to search in
 * @value: Value to search for
 * @start: Starting index of the search range
 * @end: Ending index of the search range
 *
 * Return: Index of the first occurrence of the value if found, otherwise -1
 */
int binary_search_v3(int *array, int value, size_t start, size_t end)
{
	size_t mid = 0;

	if (start < end)
	{
		mid = (start + end) / 2;
		printArray(array, start, end);
		if (value == array[mid] &&
		    (array[mid - 1] != value))
			return (mid);
		else if (value <= array[mid])
			return (binary_search_v3(array, value, start, mid));
		else if  (value > array[mid])
			return (binary_search_v3(array, value, mid + 1, end));
	}
	printArray(array, start, end);
	if (value == array[end])
		return (end);
	return (-1);
}

/**
 * advanced_binary -Searches for a value in a sorted arr using binary search
 *
 * @array: Pointer to the sorted array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of the value if found, otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array && size > 0)
		return (binary_search_v3(array, value, 0, size - 1));
	return (-1);
}
