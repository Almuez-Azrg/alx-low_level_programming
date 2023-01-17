#include "main.h"
#include <stdio.h>
/**
  *_puts - prints a string
  *@str:pointers to int that woll be changed
  *
  *returns:void
  */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
