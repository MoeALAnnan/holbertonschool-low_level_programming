#include "main.h"
/**
* reverse_array - function
* @a: array
* @n: number of elements
* Description: a function that prints a line
* Return: void
*/

void reverse_array(int *a, int n)

{	int i = 0;
	int *b;
	int *e;
	int temp;

	b = a;
	e = (a + (n - 1));
	while (i < (n - 1) / 2)
	{
		temp = *e;
		*e = *b;
		*b = temp;
		i++;
		b++;
		e--;
	}
}
