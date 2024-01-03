#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;
	int k = 0;

	while (*(src + 1) != '\0')
	{
		c++;
	}
	for ( ; k < c ; k++)
	{
	dest[k] = src[k];
	}
dest[c] = '\0';
return (dest);
}
