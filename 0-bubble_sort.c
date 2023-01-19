#include "sort.h"

/**
 * bubble_sort - sorts an array of size ``size`` using
 * bubble sort algorith.
 * @array: being the array to be sorted.
 * @size: being the size of the array.
 * Return: nothing.
 */
void bubble_sort(int *array, size_t size)
{
	int temp, n_times = 0;
	size_t i, j;
	int h_v = array[0]; /* highest value */
	size_t h_p = size; /* highest position */

	for (i = 0; i < h_p; i++)
	{
		for (j = 0; j < h_p - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}

			h_v = h_v > array[j + 1] ? h_v : array[j + 1];
				if (h_v == array[h_p - 1])
					h_p--;

			n_times++;
		}
	}
	printf("======= ");
	printf("%d total cycle.\n", n_times);
}
