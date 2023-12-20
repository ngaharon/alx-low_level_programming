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

	for (z = 0 ; a < 10 ; a++)
	{
		for (z = 'a' ; z <= 'z' ; z++)
			_putchar(z);
		_putchar('\n');
	}
}
