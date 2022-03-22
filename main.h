#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlimits.h>
#include <unistd.h>
#include <string.h>

int ini_printf(const char *format, va_list args);
int _printf(const char *format, ...);
int _putchar(char c);

#endif
