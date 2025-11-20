#include "main.h"

/**
 * array_range - creates an array of integers from min to max (included)
 * @min: first value of the array
 * @max: last value of the array
 *
 * Return: pointer to the new array or NULL if it fails
 */
int *array_range(int min, int max)
{
	int *tab, i, size = max - min + 1;

	if (size < 1)
		return (NULL);

	tab = malloc(size * sizeof(int));
	if (tab == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		tab[i] = min++;
	}

	return (tab);
}
