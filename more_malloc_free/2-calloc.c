#include "main.h"

/**
 * _calloc - Allocates memory for an array and initialized it to zero
 * @nmemb: number of elements of the array
 * @size: size in bytes of each element of the array
 * 
 * Return: pointer to the new allocated area or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char *ptr = NULL;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = '\0';

	return (ptr);
}
