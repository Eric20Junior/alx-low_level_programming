#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; scr[j] != '\0'; j++)
		;
	dest[i] = scr[j];
	i++;

	dest[i] = '\0';

	_putchar(dest);
}
