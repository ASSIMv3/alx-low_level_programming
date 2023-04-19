#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the opcodes of its own
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
void print_opcodes(int num_bytes)
{
	char *ptr = (char *) &print_opcodes;
	
	for (int i = 0; i < num_bytes; i++)
		printf("%02x ", ptr[i] & 0xff);
	printf("\n");
}
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(num_bytes);
	return (0);
}
