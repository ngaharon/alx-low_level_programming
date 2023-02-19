#include <stdio.h>

/**
 * main - prints the alphabet.
 *
 * Return: Always 0 (successful)
 */
int main(void)
{
	char alp[26] = "abcdefghigjklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	puchar('\n');
	return (0);
}
