#include "main.h"
#include <stdio>
/***/
void print_diagsums(int *a, int size)
{
	int sum1, sum2, x, y, z;

	y = 0; z = size - 1;
	sum1 = sum2 = 0;
	for (x = 0; x < size; x++, y += size + 1, z += size - 1)
	{
		sum1 += *(a + y);
		sum2 += *(a + z);
	}
	printf("%d, %d\n", sum1, sum2);
}
