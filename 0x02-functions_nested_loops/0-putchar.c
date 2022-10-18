#include "main.h"



/**
 * putchar function
 * main function:  prints putchar as output
 *
 * Return: main function returns (0)
 */

int main(void)

{

char *put = "putchar";
while(*put)
{
_putchar(*put);
*put++;


}
_putchar('\n');
return (0);
}
