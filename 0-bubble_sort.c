#include "sort.h"

/**
 * bubble_sort - Sort array of integers using bubble sort
 *
 * @array: List of integers
 * @size: The length of the array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t size_d = size;
	int times = 1;
	int many_times = 0;
	int tmp;

	while (size && array)
	{
		for (i = 0; i < (size_d - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size_d);
				times = 0;
			}
			many_times++;
		}
		if (times == 1)
			break;
		size--;
	}
}