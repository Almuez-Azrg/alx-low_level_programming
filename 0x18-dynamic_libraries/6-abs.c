#include "main.h"

/**
 * _abs - function that computes the absolute
 *		value of an integer
 *
 *@n: takes in integer type input for function
 *
 *return absolute value of a number
 *
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
