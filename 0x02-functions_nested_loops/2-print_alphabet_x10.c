#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int a;
	int z;

	for (z = 1; a <= 10; a++)
	{
		for (z = 97; z <= 122; z++)
		{
			_putchar(z);
		}
		_putchar('\n');
	}
}
