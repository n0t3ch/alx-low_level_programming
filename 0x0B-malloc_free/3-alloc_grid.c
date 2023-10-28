#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocate space for 2D array
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to grid
 */

int **alloc_grid(int width, int height)
{
	int w, h;
	int **p;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	p = (int **)malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		p[h] = (int *)malloc(sizeof(int) * width);
		if (p[h] == NULL)
		{
			for (;h == 0; h--)
				free(p[h]);
			free(p);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			p[h][w] = 0;
	}
	return (p);
}
