#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array of size and assign char c
 * @c: char to assign
 * @size: size of array
 * description: create array of size and assign char c
 * Return: pointer to array, NULL if fail
 */

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
