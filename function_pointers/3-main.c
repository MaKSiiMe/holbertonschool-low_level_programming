#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: size of argv
 * @argv: array of size argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	char *op = argv[2];
	int b = atoi(argv[3]);
	int (*f)(int, int);

	f = (*get_op_func)(op);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (*op != '+' || *op != '-' || *op != '*' || *op != '/' || *op != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '%') && (a == 0 || b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(a, b));
	return (0);
}
