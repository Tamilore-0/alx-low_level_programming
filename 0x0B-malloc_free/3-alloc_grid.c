#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: column of the array
 * @height: row of the array
 * Return: If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{

