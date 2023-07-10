#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: Pointer to 2 dim.
 */

int **alloc_grid(int width, int height)
{
	int **dem;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	dem = malloc(sizeof(int *) * height);

	if (dem == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		dem[a] = malloc(sizeof(int) * width);

		if (dem[a] == NULL)
		{
			for (; a >= 0; a--)
				free(dem[a]);

			free(dem);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		dem[a][b] = 0;
	}

	return (dem);
}
