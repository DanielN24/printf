#include "main.h"
/**
 * option_s - Evaluates the format s for _printf
 * @format: string of characteres
 * @args: A va_lis
 * Return: characters stored to output
 */

int option_s(const char *format, va_list args)
{
	int retu;

	switch (*format)
	{
		case 's':
		{
			const char *str = va_arg(args, const char *);
			{
				while (*str)
				{
					retu = _putchar(str);
					return (str);

					break;
				}
			}
		}
	}
}
