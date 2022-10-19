#include "main.h"
/**
 * fxn_primeWq - a function
 * @x: parameter user input
 * @c: parameter counter
 * Description: a function that checks for prime numbers
 * Return: void
 */
int fxn_prime(int x, int c)
{
	if (x < c)
	return (0);
	if (x > c)
	{
		if (x % c  == 0)
			return (0);

		else
			return (fxn_prime(x, (c + 1)));

	}
	else
		return (1);

}
/**
 * is_prime_numbers - a function
 * @n: user input
 * Description: a function that calls a function to check for prime numbers
 * Return: void
 */
int is_prime_number(int n)
{

	return (fxn_prime(n, 2));
}
