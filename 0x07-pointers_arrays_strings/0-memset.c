#include "main.h"
/**
 * _memeset - fill a block of memory with a specific value
 * @s: starting address of memmory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;


	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
