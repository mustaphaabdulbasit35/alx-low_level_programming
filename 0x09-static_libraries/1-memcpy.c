#include "main.h"

/**
 * _memcpy - a function that copies a memory
 * @src: area of copies memory
 * @dest: area of stored memory
 * @n: number of bytes
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int i = n;

	for (; p < i; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
