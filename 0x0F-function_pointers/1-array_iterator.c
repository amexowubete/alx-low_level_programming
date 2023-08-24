#include <stdio.h>
#include "function_pointers"
/**
 * array_iterator - a function that execute a function on each element of array
 * @array: array
 * @size: how many element to print
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;
		if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]));
	}
}
