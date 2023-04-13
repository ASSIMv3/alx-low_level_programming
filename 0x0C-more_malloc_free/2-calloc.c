#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array
 * @nmemb: Number of elements to allocate memory for
 * @size: Size of each element in bytes
 * Return: A pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	void *ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	unsigned char *p = ptr;

	for (size_t i = 0; i < nmemb * size; i++)
	{
		*p++ = 0;
	}

	return (ptr);
}
