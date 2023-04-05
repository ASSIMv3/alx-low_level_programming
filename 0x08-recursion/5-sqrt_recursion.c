#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: square root
 * @i: number
 * Return: square root
 */
int _sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number 
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int root = _sqrt_root(1, n, 0);

	return (root);
}
