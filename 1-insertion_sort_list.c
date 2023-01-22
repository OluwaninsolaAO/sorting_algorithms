#include "sort.h"

/**
 * insertion_sort_list - sorts a list using insertion
 * sort algorithm.
 * @list: being a doubly link list to be sorted.
 * Return: nothing.
 *
 * The swapping approach visualized as shown below:
 *
 * For each node before swapping:
 * [x] <-> [prev] <-> [node] <-> [y]
 * node->next = y
 * node->prev = prev
 * prev->next = node
 * prev->prev = x
 * x->next = prev
 * y->prev = node
 *
 * For each node after swapping:
 * [x] <-> [node] <-> [prev] <-> [y]
 * node->next = prev
 * node->prev = x
 * prev->next = y
 * prev->prev = node
 * x->next = node
 * y->prev = prev
 *
 * Logic to condiser for x and y while swapping nodes
 * provided that they are NULL pointers.
 * if x == NULL don't update x
 * if y == NULL don't update y
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *main, *x, *prev, *node, *y;

	if (list == NULL)
		return;

	main = *list;

	while (main != NULL)
	{
		node = main;
		while (node->prev != NULL)
		{
			prev = node->prev;
			x = prev->prev;
			y = node->next;

			if (x == NULL)
				*list = prev;
			if (node->n <= prev->n)
			{
				node->next = prev;
				node->prev = x;
				prev->next = y;
				prev->prev = node;

				if (x != NULL)
					x->next = node;
				if (y != NULL)
					y->prev = prev;

				if (node->prev == NULL)
					*list = node;

				print_list(*list);
				continue;
			}
			node = node->prev;
		}
		main = main->next;
	}
}
