#include "main.h"
#include <stdio.h>

/**
 * _print_revrecursion - print reversed string
 * %s: string
 */

void _print_rev_recursion(char *s)
{
	if(*s)
	{
	 _print_rev_recursion(s+1);
	 _putchar(*s);
	}
}
