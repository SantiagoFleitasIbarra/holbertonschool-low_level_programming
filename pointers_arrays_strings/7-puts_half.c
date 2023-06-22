#include "main.h"
#include <string.h>
#include <stdio.h>
/***/
void puts_half(char *str)
{
	int len = strlen(str);
	int i;
	for (i = len / 2; i < len; i++)
	{
		printf("%d", i);
	}
	printf("\n");
}
