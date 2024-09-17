#include "search_algos.h"

/**
 * value_search - searches for a value in an array of integers
 * @array: The input array
 * @size: The size of the array
 * @value: The value to search in
 * Return: (index of the number)
 */
int value_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (value_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (value_search(array, half + 1, value));

	half++;
	return (value_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - Returns index of the number
 * from the value_search function
 * @array: The input array
 * @size: The size of the array
 * @value: The value to search in
 * Return: The index of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = value_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
