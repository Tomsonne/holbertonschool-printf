#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>


int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
void recursion_print_int(unsigned int num);
int print_validate(char format);
int print_func_format(const char format, va_list args);
int print_all(const char *format, va_list args);
int _write(char c);
int _printf(const char *format, ...);


typedef struct format_types
{
char format;
int (*f)(va_list args);
} form;

#endif
