#include "search_algos.h"
#include <math.h>
/**
 * jump_search - a function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: -1 if value is not present or if array is NULL
 * or first index where value is located
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i, start, end, step;

	start = 0;
	step = sqrt(size);
	end = step;

	if (array == NULL)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", start, array[start]);

	while (array[end] < value && end < size)
	{
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		start = end;
		end += step;
		if (end >= size)
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	for (i = start; i <= end && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
