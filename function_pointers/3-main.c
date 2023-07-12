# include "3-calc.h"
# include <stdio.h>
# include <stdlib.h>
/***/
int main(int argc, char *argv[])
{
	int num1, num2;
	int result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	op_func = get_op_func(argv[2]);
	if (op_func == NULL || argv[2][1] != '\0' || argv[2][0] == '\0')
	{
		printf("Error\n");
		return (99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = op_func(num1, num2);
	printf("%d\n", result);
	return (0);
}
