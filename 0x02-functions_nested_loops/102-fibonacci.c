#include "main.h"

int main(void)
{
	int num;
	unsigned long fb1 = 0, fb2 = 1, sum;

	for (num = 0; num < 50; num++)
        {
		sum = fb1 + fb2;
		printf("%lu", sum);

		fb1 = fb2;
		fb2 = sum;

		if (num == 49)
			printf("\n");
		else
			printf(", ");

		
	}
	return (0);
}	
