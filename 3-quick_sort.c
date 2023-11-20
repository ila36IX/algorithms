#include "sort.h"

/**
 * swap - to swap to element in array
 *
 * @size: size of the array
 * @array: The array
 * @f: First element that will be swaped
 * @s: Second element that will be swaped
 * Return: Nothing
 */
void swap(size_t size, int *array, size_t f, size_t s)
{
	int tmp = *(array + f);
	static int *real_head;
	static size_t size_;

	if (real_head == NULL)
	{
		real_head = array;
		size_ = size;
	}

	*(array + f) = *(array + s);
	*(array + s) = tmp;
	print_array(real_head, size_);
}

/**
 * quick_sort - sort elemnt using quick sort algorithm
 *
 * @array: The array
 * @size: Size of the array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	size_t i, j = 0;
	int pivet;

	if (size == 1 || size == 0)
		return;

	swap(size, array, 0, 0);
	pivet = *(array + size - 1);
	for (i = 0; i < size - 1; i++)
	{
		if (*(array + i) < pivet)
			swap(size, array, i, j), j++;
	}

	for (i = size - 1; i > j; i--)
		*(array + i) = *(array + i - 1);

	*(array + j) = pivet;

	quick_sort(array, j);
	quick_sort(array + j + 1, size - j - 1);
}
