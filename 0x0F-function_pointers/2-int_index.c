#include "function_pointers.h"

/**
  * int_index - search for an integer
  * @array: array of elements to be searched
  * @size: size of the array
  * @cmp: function pointer to compare the search int
  * Return: integer element match, if size <=0, return -1
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]) != 0)
		{
			return (j);
		}
	}
	return (-1);
}
