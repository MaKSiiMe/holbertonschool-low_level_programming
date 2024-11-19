#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Sum
 * @a: first arg
 * @b: second arg
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Difference
 * @a: first arg
 * @b: second arg
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Product
 * @a: first arg
 * @b: second arg
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division
 * @a: first arg
 * @b: second arg
 * Return: result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Remainder of the division
 * @a: first arg
 * @b: second arg
 * Return: result
 */

int op_mod(int a, int b)
{
	return (a % b);
}
