#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoders rot13
 * @s: pointers to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int k;
	int l;
	char alpha1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alpha2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (k = 0; s[k] != '\0'; k++)
	{
		for (l = 0; l < 52; l++)
		{
			if (s[k] == alpha1[l])
			{
				s[k] = alpha2[l];
				break;
			}
		}
	}
	return (s);
}
