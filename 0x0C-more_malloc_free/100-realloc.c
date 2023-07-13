#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocate a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory
 * Return: pointer to the new allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr)
		return (NULL);
	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
		ptr1[a] = old_ptr[a];
	}
	free(ptr);
	return (ptr1);
}
