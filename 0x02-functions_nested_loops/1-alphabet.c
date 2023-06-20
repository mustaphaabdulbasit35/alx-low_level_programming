#include "main.h"

/**
 * print_alphabet - print all alphabets in lowerCase
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
