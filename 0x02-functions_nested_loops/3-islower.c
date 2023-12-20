#include "main.h"

/**
 * _islower - if the character is lowercase
 * @c: parameter to be checked
 * Return: returns 1 and 0 depending on condition
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
