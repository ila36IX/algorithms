#include "sort.h"

/**
 * shell_sort - sort using shell algorthm
 *
 * @array: List of integers
 * @size: Size of the array
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, gap = 0;
	int tmp;

	while ((gap * 3 + 1) <= size)
		gap = gap * 3 + 1;

	for (; gap > 0; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			tmp = array[i];
			j = i;
			for (j = i; j >= gap && array[j - gap] > tmp; j -= gap)

				array[j] = array[j - gap];

			array[j] = tmp;
		}
		print_array(array, size);
	}
}
