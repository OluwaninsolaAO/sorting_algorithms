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
	int temp/*, n_times = 0*/;
	size_t i, j;
	int h_v; /* highest value */
	size_t h_p = size; /* highest position */
	bool sorted;

	if (!array)
		return;
	h_v = array[0];

	for (i = 0; i < h_p; i++)
	{
		sorted = true;

		for (j = 0; j < h_p - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);

				sorted = false;
			}

			h_v = h_v >= array[j + 1] ? h_v : array[j + 1];
			if (h_v == array[h_p - 1])
				h_p--;

			/*n_times++;*/
		}
		if (sorted)
			break;
	}
	/*printf("======= ");*/
	/*printf("%d total cycle.\n", n_times);*/
}
