#include <stdio.h>
#include "3-calc.h"
/**
 *get_op_func - a functions that calls another function
 *@s:parameter
 *Return: int
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
	int i = 0;
while (i < 6)
{
if (*ops[i].op == *s)
return (ops[i].f);
i++;
}
return (0);
}
