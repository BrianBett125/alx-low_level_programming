#include "search_algos.h"
/**
 * print_subarray - Print a subarray of integers
 * @array: Pointer to the first element of the subarray
 * @left: Index of the leftmost element of the subarray
 * @right: Index of the rightmost element of the subarray
 */
void print_subarray(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; ++i)
	{
		printf("%d", array[i]);
		if (i < right)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * binary_search - a function that searches for a value in a sorted
 * array of integers using the Binary search algorithmd
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: -1 if array is NULL or value not present or index
 * where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left, middle, right;

	left = 0;
	right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	print_subarray(array, left, right);

	while (left < right)
	{
		middle = (left + right) / 2;

		if (value == array[middle])
		{
			return (middle);
		}
		else if (value < array[middle])
		{
			print_subarray(array, left, middle - 1);
			right = middle - 1;
		}
		else
		{
			print_subarray(array, middle + 1, right);
			left = middle + 1;
		}
	}
	return (-1);
}
