#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: always 0
 */
char *_strchr(char *s, char c)
{
	int l = 0;

		for (; s[l] >= '\0'; l++)
		{
			if (s[l] == c)
				return (&s[l]);
		}
	return (0);
}
