#include "3-calc.h"

/**
 * main - performs basic math operations on two numbers
 * @argc: number of arguments passed to the program
 * @argv: array of strings containing the arguments
 * Return: 0 success, 98 if argc is not 4, 99 if the operator is invalid,
 * 100 if division or modulo by 0 is attempted
 */
int main(int argc, char **argv)
{
	char op;
	int (*func)(int, int);
	int num_1, num_2, result, math_error;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	op = *argv[2];
	math_error = ((op == '/' || op == '%') && num_2 == 0);

	if (math_error)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(num_1, num_2);

	printf("%d\n", result);

	return (0);
}
