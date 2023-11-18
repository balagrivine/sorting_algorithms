#include "sort.h"

/**
 * swap  - function that swaps two elements
 * @a: first element
 * @b: second element
 *
 * Return: nothing
 */

void swap(int* a, int* b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
