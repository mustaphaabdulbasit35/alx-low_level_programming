#include "main.h"

/**
 * reverse_array - function that reverse the content of an array of integer
 * @a: pointer to array
 * @n: number of elements of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temporary, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temporary = a[counter];
		a[counter++] = a[n];
		a[n--] = temporary;
	}
}
