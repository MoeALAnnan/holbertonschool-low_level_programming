#include "main.h"
/**
 * cap_string - pointer to a string
 * @c: parameter of the string
 * Description: a function that capitalize
 * Return: pointer
 */
char *cap_string(char *c)
{
	int n = 0;
	int i = 0;

	while (c[n] != '\0')
		n++;
	if (c[i] >= 'a' && c[i] <= 'z')
	c[i] = c[i] - 32;

	for (i = 0; i < n && c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')

			if (c[i - 1] == ',' || c[i - 1] == ';'
					|| c[i - 1] == '.' || c[i - 1] == '!'
					|| c[i - 1] == '?' || c[i - 1] == '"'
					|| c[i - 1] == '(' || c[i - 1] == ')'
					|| c[i - 1] == '{' || c[i - 1] == '}'
					|| c[i - 1] == '\n' || c[i - 1] == ' ' || c[i - 1] == '\t')

				c[i] = c[i] - 32;
	}

	return (c);
}
