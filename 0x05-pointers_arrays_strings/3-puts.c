#include "main.h"

/**
 * _puts - fuction that prints a string
 * @str: pointer to the string
 * Return: string and new line
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
