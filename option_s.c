#include "main.h"
/**
 * option_s - Evaluates the format s for _printf
 * @format: string of characteres
 * @args: A va_lis
 * Return: characters stored to output
 */

int option_s(const char *format, va_list args)
{
	int counter = 0;

	if (*format == 's')
	{
		const char *s = va_arg(args, const char *);
		if (!s)
			s = "(null)";
		while (s && *s)
		{
			_putchar(*s++);
			counter++;
		}
	}
	return (counter);
}
