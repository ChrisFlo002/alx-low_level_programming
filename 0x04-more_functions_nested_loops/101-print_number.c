#include "main.h"
#include <limits.h>

/**
* print_number - outputs a number
* @n: an int given from main
*
* Description: Uses headers to link and a nested loops to achieve goal
* Return: no return is void
* A: The case when n is zero
* B: I set places to be 1 billion initially. If it was bigger than the
* number then I reduce places by a factor of 10 until it is small
* enough to do nice math.
* E: If the number is negative I will convert it to a positive
* and print a minus sign. Then proceed with the code as normal.
*/


void print_number(int n)
{
	int x = n;
	int digit;
	int places = 1000000000;

	if (n < 0)/* E */
	{
		x = -n;
		_putchar('-');
	}
	else if (n == 0)/* A */
		_putchar('0');
	else
	{
		_putchar(n);
	}
}
