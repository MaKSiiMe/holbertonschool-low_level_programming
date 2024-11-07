#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: size of argv
 * @argv: array of size argc
 * Return: argv
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
