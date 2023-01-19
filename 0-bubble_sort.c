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
	int temp;
	size_t i, n;

	for (n = 0; n < size; n++)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
