#include "sort.h"
/**
 * bubble_sort - A sorting algorithm with thw bubblesort method
 *
 * @array: The array to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int temp, check;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < (size - 1); i++)
	{
		check = 0;
		for (n = 0; n < (size - 1 - i); n++)
		{
			if (array[n] > array[n + 1])
			{
				temp = array[n];
				array[n] = array[n + 1];
				array[n + 1] = temp;
				print_array(array, size);
				check = 1;
			}
		}
		if (check == 0)
		{
			break;
		}
	}
}
