#include "main.h"
/**
 * option_c - Evaluates the format c for _printf
 * @format: Characters
 * @args: A va_lis
 * Return: characters stored to output
 */

void option_c(const char *format, va_list args)
{
	if (*format == 'c')
	{
		char ch = va_arg(args, int);

		_putchar(ch);
	}
}
