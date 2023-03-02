#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	count = 0;
	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}

	return (dest);
}
