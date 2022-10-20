#include "main.h"

/**
* print_most_numbers - Prints numbers excluding 2 and 4
*
* Description: Prints the numbers excluding 2 and 4
*
* Return: numbers from 0 up to 9
*/
void print_most_numbers(void)
{
int a = 0;

for (; a <= 9; a++)
{
if (a == 2 || a == 4)
{
continue;
}
else
{
_putchar(a + '0');
}
}

_putchar('\n');
}

