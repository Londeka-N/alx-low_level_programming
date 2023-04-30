#include "function_pointers.h"
/**
* array_iterator - a function given as a parameter on each element of an array.
* @array: array of interest
* @size: is the size of interest
* @action:  pointer to the function you need to use
*
* Return: 0 when successfull
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
