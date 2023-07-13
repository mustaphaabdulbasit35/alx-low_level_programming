#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * is_digit - check if a string contain a non-digit char
 * @s: string to be evaluated
 * Return: 1 if a non digit is found, else 0
 */

int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen - return the length of string
 * @s: string to evaluate
 * Return: the length of string
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * errors - handle errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiply two positive number
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *b1, *b2;
	int len1, len2, len, a, take, digit1, digit2, *result, c = 0;

	b1 = argv[1], b2 = argv[2];
	if (argc != 3 || !is_digit(b1) || !is_digit(b2))
		errors();
	len1 = _strlen(b1);
	len2 = _strlen(b2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (a = 0; a < len1 + len2; a++)
		result[a] = 0;
	for (len1 = len1 - 1; len >= 0; len--)
	{
		digit1 = b1[len1] - '0';
		take = 0;
		for (len2 = _strlen(b2) - 1; len >= 0; len2--)
		{
			digit2 = b2[len2] - '0';
			take += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = take % 10;
			take /= 10;
		}
		if (take > 0)
			result[len1 + len2 + 1] += take;
	}
	for (a = 0; a < len - 1; a++)
	{
		if (result[a])
			c = 1;
		if (c)
			_putchar(result[a] + '0');
	}
	if (!c)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
