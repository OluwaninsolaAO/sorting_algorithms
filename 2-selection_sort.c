#include "sort.h"

/**
 * selection_sort - sorts ab array of integers in
 * ascending order using the Selection Sort
 * Algorithm.
 * @array: being the array to be sorted.
 * @size: being the size of the array to be sorted
 *
 * Returns: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int n, x, pos;
	bool flag;

	if (!array)
		return;
	flag = false;

	for (i = 0; i < size; i++)
	{
		n = array[i];
		for (j = i + 1; j < size; j++)
		{
			x = array[j];
			if (x <= n)
			{
				pos = j;
				n = x;
				flag = true;
			}
		}
		if (flag)
		{
			array[pos] = array[i];
			array[i] = n;
			flag = false;
			print_array(array, size);
		}
	}
}
