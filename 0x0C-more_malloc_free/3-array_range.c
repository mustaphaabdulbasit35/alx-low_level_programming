#include <stdlib.h>
#include "main.h"

/**
 * *array_range - create an array of integer
 * @max: maximum range of value stored
 * @min: minmimum range of value stored
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int a, rang;

	if (min > max)
		return (NULL);

	rang = max - min + 1;

	ptr = malloc(sizeof(int) * rang);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		ptr[a] = min++;
	return (ptr);
}
