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
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: array of integers
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	if (size < 2 || !array)
		return;

	for (i = 0; i < size; i++)
	{
		min_idx = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		if (min_idx != i)
			swap(&array[i], &array[min_idx]);
		print_array(array, size);
	}
}
