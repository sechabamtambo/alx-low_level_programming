#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int stRing;

	stRing = 0;
	while (s1[stRing] != '\0' && s2[stRing] != '\0')
	{
		if (s1[stRing] != s2[stRing])
		{
			return (s1[stRing] - s2[stRing]);
		}
        stRing++;
	}
	return (0);
}
