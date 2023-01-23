#include "sort.h"

void partition(int *array, size_t size, size_t hi, size_t lo);
/**
 * quick_sort - Sorts an array of integers in ascending
 * order using quick sort algorithm.
 * @array: being the array to be sorted.
 * @size: being the size of the array.
 * Return: Nothing.
 */
void quick_sort(int *array, size_t size)
{
	size_t hi, lo;

	if (!array)
		return;

	hi = size - 1;
	lo = 0;

	partition(array, size, hi, lo);
}

/**
 * partition - sorts a partition of an array recursively
 * using a quick sort algorithm.
 * @array: being the partition of an array to be sorted.
 * @size: being the size of the array.
 * @hi: being the highest point of the partition in the
 * array.
 * @lo: being the lowest point of the partition in the
 * array.
 * Returns: Nothing.
 */
void partition(int *array, size_t size, size_t hi, size_t lo)
{
	int i, temp;
	size_t j;

	if (hi == lo || hi + 1 == lo || hi - 1 == lo)
		return;

	i = lo - 1;
	for (j = lo; j < hi; j++)
	{
		if (array[j] <= array[hi])
		{
			i++;
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
			if (i != (int) j)
				print_array(array, size);
		}
	}
	i++;
	temp = array[j];
	array[j] = array[i];
	array[i] = temp;
	if (i != (int) j)
		print_array(array, size);
	if (i != 0)
		partition(array, size, i - 1, lo);
	if (i < (int) size)
		partition(array, size, hi, i + 1);
}
