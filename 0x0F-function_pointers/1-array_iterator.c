#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array.
 * @array: pointer to the array
 * @size: size of the array
 * @action: function given as parameter
 *Return: void function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		void (*p)(int);

		p = action;
		while (i < size)
		{
			p(array[i]);
			i++;
		}
	}
}
