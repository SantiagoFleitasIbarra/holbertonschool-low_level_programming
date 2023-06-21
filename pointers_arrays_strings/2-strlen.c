#include <stdio.h>
#include "main.h"
/***/
int _strlen(char *s)
{ 
	int cont = 0;

	while (*s != 0)
	{
		cont++;
		s++;
	}
	return (cont);
}
