#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - 'prints the opcodes of the program'
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int abytes, i;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	abytes = atoi(argv[1]);

	if (abytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (i = 0; i < abytes; i++)
	{
		if (i == abytes - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
	}
	return (0);
}
