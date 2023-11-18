#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: pointer to the array to be sorted
 * @size: size of the array
 *
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
