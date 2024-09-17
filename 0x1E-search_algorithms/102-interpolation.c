#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: is the value to search for
 * Return: -1 if value is not present in array or if array is NULL
 * or return the first index value located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL)
		return (-1);

	while (array[low] != array[high])
	{
		size_t pos = low + (((double)(high - low) / (array[high] -
						array[low])) * (value - array[low]));
		if (pos < low || pos > high)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
