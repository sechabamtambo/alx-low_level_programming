#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - entry point
 * @a: input
 * @size: input
 * Return: Always 0 (success)
 */
void print_diagsums(int *a, int size)
{
	int i, j, y;

	i = 0;
	j = 0;

	for (y = 0; y < size; y++)
	{
		i = i + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		j += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", i, j);
}
