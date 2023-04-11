#include "main.h"
#include <stdlib.h>
/**
 * create_array - Create an array of chars and initialize it with char
 * @size: the size of the array to create
 * @c: the char to initialize the array with
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (arr == NULL)
	{
		return (NULL);
	}
	size_t i;
	for ( i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
