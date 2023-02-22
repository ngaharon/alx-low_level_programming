#include "main.h"

/**
 * _islower - if the character is lowercase
 * Return: returns 1 and 0 depending on condition
 */
int _islower(void)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
