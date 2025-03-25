#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>


int print_char(va_list args);
int print_string(va_list args);
int print_int(int num);
void recursion_print_int(int num);
int _write(char c);


typedef struct format_types
{
		char *format;
		void (*f)(va_list args);
} form;

#endif