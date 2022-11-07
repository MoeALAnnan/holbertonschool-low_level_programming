#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdarg.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	void (*f)(va_list ap);

} op_f;
void print_int(va_list ap);
void print_char(va_list ap);
void print_str(va_list ap);
void print_flt(va_list ap);
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
