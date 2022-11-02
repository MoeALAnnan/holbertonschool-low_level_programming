#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
/**
 * print_name - a function
 * @name: parameter to be printed
 * @f: function to be called
 * Description: a function that recieves a function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	exit(1);
	f(name);
}
