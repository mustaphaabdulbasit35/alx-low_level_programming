#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - return the sum of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the difference of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the product of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the division of two numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return the remainder of the division of both number
 * @a: first number
 * @b: second number
 *
 * Return: the division of the remainder of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
