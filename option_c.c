#include "main.h"
/**
 * option_c - Evaluates the format c for _printf
 * @format: Characters
 * @args: A va_lis
 * Return: characters stored to output
 */

int option_c(const char *format, va_list args)
{
	int retu = _putchar(ch);

	switch (*format)
	{
		case 'c':
		{
			char ch = va_arg(args, int);

			retu = _putchar(ch);
			return (ch);

			break;
		}
	}
}
