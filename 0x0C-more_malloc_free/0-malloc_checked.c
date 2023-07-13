#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - fuction allocating memory using malloc
 * @b: number of bytes to be allocated
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
