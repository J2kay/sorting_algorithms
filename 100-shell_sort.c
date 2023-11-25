#include "sort.h"

/**
 * shell_sort - A sorting algorithm
 * @array: The array to be sorted
 * @size: Number of elements
 */
void shell_sort(int *array, size_t size)
{
	size_t j, i, space = 1;
	int key;

	while (space <= size / 3)
	{
		space = space * 3 + 1;
	}

	while (space > 0)
	{
		for (i = space; i < size; ++i)
		{
			key = array[i];
			j = i;
			while (j >= space && array[j - space] > key)
			{
				array[j] = array[j - space];
				j -= space;
			}

			array[j] = key;
		}
		space = (space - 1) / 3;
		print_array(array, size);
	}
}
