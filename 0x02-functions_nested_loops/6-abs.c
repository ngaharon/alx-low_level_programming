#include "main.h"
/**
 * _abs - function to find the absolute value of a number
 * @x: function parameter
 * Return: -x or x;
 */

int _abs(int x)
{
	if (x < 0)
		return (-x);
	else if (x >= 0)
	{
		return (x);
	}
	return (0);
}
