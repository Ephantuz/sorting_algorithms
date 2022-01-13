#include "sort.h"
/**
 * mini - Locatin the min From Current index in the array
 * @array: The Array to be Searched
 * @index: Starting Index of The Search
 * @size: The Size of The Array
 * Return: (int) index of min if found or
 */

int mini(int *array, int index, size_t size)
{
	int min, idx_min;
	int i;

	min = array[index];
	idx_min = index;
	for (i = index; i < (int)size; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
			idx_min = i;
		}
	}
	if (idx_min == index)
		return (-1);
	return (idx_min);
}

/**
 * selection_sort - sorts an array of integers in asc order
 *
 * @array: an array store
 * @size: an array size
 * @size: sizesssss
 */
void selection_sort(int *array, size_t size)
{
int i;
int min, tmp;
for (i = 0; i < (int)size; i++)
{
min = mini(array, i, size);
if (min != -1)
{
tmp = array[i];
array[i] = array[min];
array[min] = tmp;
print_array(array, size);
}
}
}
