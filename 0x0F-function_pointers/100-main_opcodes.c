#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the opcodes of its own
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;
	for (i = 0; i < num_bytes; i++)
	{
		if (i == (num_bytes - 1))
		{
			printf("%02x\n", ptr[i]);
			break;
		}
		printf("%02x ", ptr[i]);
	}
	return (0);
}
