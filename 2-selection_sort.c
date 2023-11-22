#include "sort.h"

/**
 * selection_sort - Sort an array using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	size_t next;
	int temp;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		next = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[next])
			{
				next = j;
			}
		}

		if (next != i)
		{
			temp = array[i];
			array[i] = array[next];
			array[next] = temp;
			print_array(array, size);
		}
	}
}
