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
	int index1 = 1;
	int index2 = 0;
	char *s;
	int result = 0;

	while (index1 < argc)
	{
		s = argv[index1];
		index2 = 0;
		while (s[index2] != '\0')
		{
			if (s[index2] < '0' || s[index2] > '9')
			{
				printf("Error\n");
				return (1);
			}
			index2++;
		}
		index1++;
	}

	for (index1 = 1 ; index1 < argc ; index1++)
	{
		result = result + atoi(argv[index1]);
	}
	printf("%d\n", result);
	return (0);
}
