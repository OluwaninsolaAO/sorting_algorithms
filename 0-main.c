#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    /*int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};*/
    /*int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};*/
    /*int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 0, 0};*/
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
