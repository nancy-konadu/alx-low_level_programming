#include "function_pointers.h"
#include <stdio.h>

/**
  * array_iterator - Entry point
  * Description - iterate through an array
  * @array: array to be iterated over
  * @size: size of the array
  * @action: function pointer to array
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)

	{
		return;
	}

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
