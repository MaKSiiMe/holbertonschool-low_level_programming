#include "stdio.h"

/**
 * main - Entry point
 * @argc: size of argv
 * @argv: array of size argc
 * Return: argv
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i != argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
