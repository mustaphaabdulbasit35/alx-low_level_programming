#include "main.h"

/**
 * _strlen - a program returning the length of a string
 * @s: string.
 * Return: length
 */

int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	return (leng);
}
