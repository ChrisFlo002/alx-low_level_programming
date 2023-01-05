#include "main.h"
/**
 * _alcuadrado - give me the square root of a
 *
 * @n: the given number
 * @corre: from 0 up looking for square always less than the half of the number
 * Return: if does not have square or corre if it find it
 */
int _pow_recursion(int x, int y)
{
	if (x < 0)
		return (-1);
	if (x == 1)
		return (1);
	if (y > x / 2)
		return (-1);
	if (x != y * y)
		return (_alcuadrado(corre, n + 1));
	if (x == y * y)
		return (y);
	return (-1);
}
/**
 * _sqrt_recursion - return de square root of a natural number
 *
 * @n: to check
 *
 * Return: the square root or -1 if it does not have
 */

int _sqrt_recursion(int n)
{
	return (_alcuadrado(n, 0));
}
