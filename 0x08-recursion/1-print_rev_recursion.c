#include "main.h"
/**
 * _puts_recursion - is a function that prints a string.
 *
 * @s: is a pointer to a char array
 *
 * Return: Return the transformed poin
 **/
void _print_rev_recursion(char *s)
{
if (*s == 0)
{
return;
}
s++;
_print_rev_recursion(s);
/**
 * _print_rev_recursion - prints a string followed by a new line
 * @s: the string to be printed
 *
 * Return: void
 */
s--;
_putchar(*s);
}
