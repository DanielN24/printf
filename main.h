#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>

int ini_printf(const char *format, va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
void option_c(const char *format, va_list args, char *buffer, int counter);
void testing(char *string);
int option_s(const char *format, va_list args, char *buffer, int counter);
void d_i_printf(char *a);
int print_d(va_list d);
int print_i(va_list i);
void unsignde_number_to_string(int number, int base, char *buffer);
int ini_printf_di(const char *format, va_list args);
void number_to_string(int number, int base, char *buffer);

#endif
