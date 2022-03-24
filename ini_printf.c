#include "main.h"
/**
 *ini_printf - function that produces output according to a format
 *@format: info to print
 *@args: info to print
 *Return: retu
 */
int ini_printf(const char *format, va_list args)
{
	int state = 0;

	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%')
				state = 1;
			else
			{
				_putchar(*format);
			}
		}
		state = 0;
		format++;
	}
	return (0);
}
