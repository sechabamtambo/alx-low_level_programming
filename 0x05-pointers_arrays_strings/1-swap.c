#include <stdio.h>

/* swap_int _ Swap the values of two integers
 * the first integer to be swapped
 * the second integer to be swapped
 *
 * return: nothing
 */

void swap_int(int *a, int *b)
{
	int tem = *a;
	*a = *b;
	*b = tem;
}
