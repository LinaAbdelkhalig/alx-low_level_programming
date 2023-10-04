#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array of ints
 * @width: the width of the array
 * @height: the height of the array
 * Return: a pointer
 */

int **alloc_grid(int width, int height)
{
	int **a, r, c;

	a  = malloc(sizeof(*a) * height);

	if (width <= 0 || height <= 0 || a == 0)
		return (NULL);

	for (r = 0; r < height; r++)
	{
		a[r] = malloc(sizeof(**a) * width);
		if (a[r] == 0)
		{
			while (r--)
				free(a[r]);
			free(a);
			return (NULL);
		}
		for (c = 0; c < width; c++)
			a[r][c] = 0;
	}
	return (a);
}
