# ifndef _VARIADIC_FUNCTIONS_H
# define _VARIADIC_FUNCTIONS_H
# include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int printc(va_list a);
int printi(va_list a);
int print_f(va_list a);
int prints(va_list a);
/**
 * struct op - struct for 3
 * @c: character to check
 * @f: function to point to
 */
typedef struct op
{
	char *c;
	int (*f)(va_list a);
} printer;
# endif
