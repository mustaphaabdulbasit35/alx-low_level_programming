#include "main.h"
#include <stdlib.h>

/**
 * str_concat - gets the end of input and add up together
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, bi;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = bi = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[bi] != '\0')
		bi++;
	concat = malloc(sizeof(char) * (i + bi + 1));

	if (concat == NULL)
		return (NULL);
	i = bi = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	while (s2[bi] != '\0')
	{
		concat[i] = s2[bi];
		bi++;
	}
	concat[i] = '\0';
	return (concat);
}
