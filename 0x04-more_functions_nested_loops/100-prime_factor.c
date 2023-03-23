#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 * Return: Success Always
 */
int main(void)
{
	long int num = 612852475143;
	long int i;
	for (i = 2; i <num; i++)
	{
		while (num % i == 0)
			num = num / i;
	}

	printf("%lu\n", num);

	return (0);
}
