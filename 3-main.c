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
    int arrayb[] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    quick_sort(array, n);
    printf("\n");
    print_array(array, n);
    
    n = sizeof(arrayb) / sizeof(arrayb[0]);

    print_array(arrayb, n);
    printf("\n");
    quick_sort(arrayb, n);
    printf("\n");
    print_array(arrayb, n);
    return (0);
}
