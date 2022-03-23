#include "main.h"
/**
 * option_c - Evaluates the format c for _printf
 * @format: Characters
 * @args: A va_lis
 * Return: characters stored to output
 */

int option_c(const char *format, va_list args)
{
	char ch = va_arg(args, int);
	int retu = _putchar(ch);

	if (*format == 'c')
	{
		_putchar(ch);
		return (retu);

		break;

	}
	return (0);
}
