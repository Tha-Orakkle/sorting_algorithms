#include "sort.h"

/**
 * swap - swap the values of two integer
 * @n1: point to first int
 * @n2: pointer to second int
 */
void swap(int *n1, int *n2)
{
	int tmp = *n1;

	*n1 = *n2;
	*n2 = tmp;
}


/**
 * bubble_sort - sorts an array of integers in an ascending order  by
 * comparing 2 integers at a time
 * @array: array of integers
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int bubbly = 1;

	if (!array || size < 2)
		return;

	while (bubbly == 1)
	{
		bubbly = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				print_array(array, size);
				bubbly = 1;
			}
		}
	}
}
