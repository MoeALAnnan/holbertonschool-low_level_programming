#include "main.h"
/**
 * rev_string - Entry point
 * @s: parameter
 * Description: a function that reverse
 * Return: void
 */

void rev_string(char *s)
{

	int i = 0;
	int c = 0;
	char *beg;
	char *end;
	char temp;

	c = sizeof(s);

	beg = s;
	end = s + c;

	while (i < c / 2)
	{
		temp = *end;
		*end = *beg;
		*beg = temp;
		i++;
		beg++;
		end--;
	}

}
