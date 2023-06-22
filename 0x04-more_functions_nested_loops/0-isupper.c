#include "main.h"

/**
 * _isupper - Checks for lowercase characters
 * @c: The character is to be checked
 * Return: 1 for uppercase or 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
