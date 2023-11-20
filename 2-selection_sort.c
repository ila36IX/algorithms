#include "sort.h"

void selection_sort(int *array, size_t size)
{
	int tmp;
	size_t swapper, i, j;

	for (i = 0; i < size; i++)
	{
		swapper = i;
		for (j = i; j < size; j++)
		{
			if (array[swapper] > array[j])
				swapper = j;
		}
		if (swapper != i)
		{
			tmp = array[i];
			array[i] = array[swapper];
			array[swapper] = tmp;
			print_array(array, size);
		}
	}
}