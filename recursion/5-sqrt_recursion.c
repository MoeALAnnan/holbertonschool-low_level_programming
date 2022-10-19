#include "main.h"
/**
 * fxn - a function
 * @x: parameter user input
 * @c: parameter counter
 * Description: a function that calculates the factorial
 * Return: void
 */
int fxn(int x, int c)
{
	if (c <= x)
	{
		if (x == (c * c))
			return (c);

		else
			return (fxn(x, (c + 1)));

	}
	else
		return (-1);

}
/**
 * _sqrt_recursion - a function
 * @n: user input
 * Description: a function that calculates the square root of a natural number
 * Return: void
 */
int _sqrt_recursion(int n)
{

	return (fxn(n, 1));
}
