#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
    listint_t *list;
    listint_t *node;
    int *tmp;

    list = NULL;
    while (size--)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return (NULL);
        tmp = (int *)&node->n;
        *tmp = array[size];
        node->next = list;
        node->prev = NULL;
        list = node;
        if (list->next)
            list->next->prev = list;
    }
    return (list);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    listint_t *list;
    /**
     * int array[]= {95, 53, 80, 169, 186, 208, 199, 203, 112, 164, 134, 173, 12, 21, 7, 29, 47, 79, 97, 20, 123, 209, 89, 121, 116, 115, 15, 141, 91, 40, 204, 174, 32, 8, 202, 176, 162, 94, 34, 46, 189, 11, 81, 6, 48, 57, 195, 145, 150, 27, 72, 138, 77, 167, 25, 88, 45, 10, 154, 69, 105, 111, 108, 99, 210, 185, 190, 135, 98, 114, 22, 198, 73, 26, 38, 149, 206, 201, 74, 107, 142, 133, 84, 13, 184, 182, 159, 63, 191, 33, 61, 180, 66, 102, 127, 147, 197, 70, 52, 187, 60, 171, 58, 18, 183, 156, 42, 131, 5, 157, 83, 140, 120, 130, 153, 85, 168, 129, 136, 194, 124, 17, 160, 126, 146, 64, 137, 51, 93, 113, 49, 165, 192, 92, 117, 19, 56, 200, 54, 71, 39, 128, 76, 68, 35, 37, 110, 122, 90, 9, 178, 151, 59, 188, 101, 152, 24, 181, 1, 78, 103, 2, 82, 155, 100, 144, 36, 62, 87, 30, 143, 67, 16, 170, 75, 179, 207, 43, 3, 175, 28, 148, 31, 109, 161, 50, 196, 125, 119, 166, 4, 205, 193, 163, 55, 172, 41, 132, 65, 104};
    */
    /*int array[]= {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};*/
    /*int array[] = {1, 2, 9, 4, 5, 6, 7, 9, 1, 8};*/
    int array[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    size_t n = sizeof(array) / sizeof(array[0]);

    list = create_listint(array, n);
    if (!list)
        return (1);
    print_list(list);
    printf("\n");
    insertion_sort_list(&list);
    printf("\n");
    print_list(list);
    insertion_sort_list(NULL);
    return (0);
}
