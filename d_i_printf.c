#include "main.h"
/**
*d_i_printf - evaluates the format i and d for _printf
*@a: variable name
*
*/
void d_i_printf(char *a)
{
	while (*a)
		write(1, a++, 1);
}
