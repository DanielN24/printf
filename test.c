#include "main.h"

/**
 * testing - function to prove the ini function
 * @string: string to prove diference
 */

void testing(char *string)
{
	int len = 0, len2 = 0;


	printf("printf original:\n[");
	len = printf(string);
	printf("]\n_printf ownner:\n[");
	len2 = _printf(string);
	printf("]");

	if (len != len2)
		printf("Are diferents: %d != _%d", len, len2);
}

/**
 * main - prove the testing funcion
 * Return: an integer
 */

int main(void)
{
	testing("%%Jesusesfeo");
	return (0);
}









