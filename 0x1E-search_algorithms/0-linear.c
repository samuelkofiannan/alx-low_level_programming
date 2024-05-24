#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers.
 *
 * @array: the array to search in.
 * @size: the number of elements in the array.
 * @value: the value to search for.
 *
 * Return: the index of the value if found, -1 otherwise.
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
