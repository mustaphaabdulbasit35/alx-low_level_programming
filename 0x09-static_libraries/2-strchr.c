#include "main.h"

/**
 * _strchr - entry point of a program
 * @s: input value
 * @c: input value
 * Return: 0 (success)
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
