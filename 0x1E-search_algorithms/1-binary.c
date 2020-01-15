#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: to search for
 * Return: index where value is located or -1 of error
 **/
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid, i;

	if (array == NULL)
	    return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
			{
				printf("%d", i);
				break;
			}
			printf("%d, ", i);
		}
		printf("\n");

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		else if (array[mid] > value)
			right = mid - 1;

		else
			left = mid + 1;
	}
	return (-1);
}
