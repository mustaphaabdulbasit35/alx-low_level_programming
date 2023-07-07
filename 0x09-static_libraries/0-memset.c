#include "main.h"

/**
 * _memset - a program filing a block of a memory with a specific value
 * @b: the desired value
 * @s: starting address of memory to be filled
 * @n: number of bytes
 * Return: change array with new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
