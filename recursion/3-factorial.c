#include "main.h"
/**
 * factorial - a function
 * @n: parameter
 * Description: a function that calculates the factorial
 * Return: void
 */
int factorial(int n)
{

	if (n >= 0)
	{
		if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
	}
	else
		return (-1);
}
