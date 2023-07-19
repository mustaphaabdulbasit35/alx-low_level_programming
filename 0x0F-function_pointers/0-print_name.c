#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: pointer to print the name of the function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
