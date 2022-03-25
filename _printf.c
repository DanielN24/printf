#include "main.h"
/**
 *_printf - function that produces output according to a format
 *@format: info to print
 *Return: count
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	count = ini_printf(format, args);

	return (count);
}
