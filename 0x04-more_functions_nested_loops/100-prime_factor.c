#include <stdio.h>
#include <math.h>

/**
* main - finds the largest prime
* Description: Uses headers to link and a nested loops to achieve goal
* Return: 0 if no errors
* A: Sqrt is a double by default so I did this to get rid of decimals.
* B: While the number is bigger than the sqrt of the original number.
* C: If the current number can be modulo’d by i, check if i is bigger
* than biggest. We then chunk the number by the i, reducing it and
* running the loop with the same i to further chuck it down, if possible.
* This makes number smaller and smaller which will be checked
* in the outer while loop. This helps check for prime and factors.
* D: Increase i because number was no longer modulo’d by i.
* I could have put i+=2 to half the speed of the program since we do
* not need to check for even modulus since 2 handles that, but I would
* have to refactor my code, starting with a i = 2 loop then start
* my code with i=3. In this current code of mine, I have i = 2.
*/

int main(void)
{
	unsigned long i = 2;
	unsigned long biggest = 0;
	unsigned long number = 612852475143;

	while (number > i)/* B */
	{
		while (number % i == 0)/* C */
		{
			if (i > biggest)
				biggest = i;
			number = number / i;
		}
		i++;/* D */
	}
	printf("%lu\n", biggest);
	return (0);
}
