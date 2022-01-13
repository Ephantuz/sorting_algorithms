#include "sort.h"

/**
 * swap - Swaps elements of an array
 *
 * @xp: pointer to element to be swapped
 * @yp: pointer to element to be swapped
 */
void swap(int *xp, int *yp)
{
	int temp;

	temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * selection_sort - Sorts an array of integers in ascending order
 *	using Selection Sort
 *
 * @array: Array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		if (min_idx == i)
			continue;
		swap(&array[min_idx], &array[i]);
		print_array(array, size);
	}
}
