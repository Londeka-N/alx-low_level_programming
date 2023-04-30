#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
* op_add - sums up two numbers
* @a: first digit
* @b: second digit
*
* Return: 0 when successful
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - takes difference between two numbers
* @a: first digit
* @b: second digit
*
* Return: 0 when successful
*/
int op_sub(int a, int b)
{
	return (a - b);
}


/**
* op_mul - multiplies two numbers
* @a: first number
* @b: second number
*
* Return: 0 when succesful
*/
int op_mul(int a, int b)
{
	return (a * b);
}


/**
* op_div - divides two numbers
* @a: first digit
* @b: second digit
*
* Return: 0 when successful
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}


	return (a / b);
}

/**
* op_mod - Returns the remainder of the division of two numbers.
* @a: first digit
* @b: second digit
*
* Return: 0 when successful
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
