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
	int retu;

	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%')
				state = 1;
			else
			{
				retu = _putchar(*format);
				return (retu);
			}
		}
		else if (state == 1)
		{
			switch (*format)
			{
				case 'c':
				{
					char ch = va_arg(args, int);

					retu = _putchar(ch);
					return (retu);

					break;
				}
				case 's':
				{
					break;
				}
				case 'd':
				{
					break;
				}
				case 'i':
				{
					break;
				}
				case '%':
				{
					break;
				}
				state = 0;
			}
		}
		fortmat++;
	}
}
