#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicating to the new memory location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *bas;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	bas = malloc(sizeof(char) * (i + 1));

	if (bas == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		bas[r] = str[r];
	return (bas);
}
