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
int option_c(const char *format, va_list args);
int option_s(const char *format, va_list args);

#endif
