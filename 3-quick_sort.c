#include "sort.h"

/**
 * _swap - swap to integers
 *
 * @a: pointer to integer
 * @b: Pointer to integer
 */
void _swap(int *a, int *b)
{
	int temp = *a;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - Choose a pivot and make a sublist
 *
 * @array: List of integers
 * @low: first index
 * @high: last inedx
 * Return: The index of pivot
 */
int partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i, j;
	static int *list;
	static size_t size;

	if (!list && !size)
	{
		list = array;
		size = high + 1;
	}
	for (j = i = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i < j)
			{
				_swap(&array[j], &array[i]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (array[i] > pivot)
	{
		_swap(&array[i], &array[high]);
		print_array(array, size);
	}

	return (i);
}

/**
 * quick_sort_recursive - help function to sort
 *
 * @low: The last index
 * @high: the first index
 * @array: list of integers
 */
void quick_sort_recursive(int *array, int low, int high)
{
	if (low < high)
	{
		int pivot_index = partition(array, low, high);

		quick_sort_recursive(array, low, pivot_index - 1);
		quick_sort_recursive(array, pivot_index + 1, high);
	}
}
/**
 * quick_sort - sort array using Quick algorithm
 *
 * @array: array of integers
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array && size)
		quick_sort_recursive(array, 0, size - 1);
}
