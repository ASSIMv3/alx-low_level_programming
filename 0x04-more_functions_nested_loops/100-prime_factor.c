#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 * Return: Success Always
 */
int main(void)
{
	long num, i;

	num = 612852475143;
	for (i = 2; i < num; i++)
	{
		while (num % i == 0)
			num = num / i;
	}

	printf("%lu\n", num);

	return (0);
}
