#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - Check if an integer is a prime number.
 * @n: The number to evaluate.
 *
 * Return: 1 if n is a prime number, 0 if not.
 */
int is_prime_number(int n)
{
	/* Negative numbers and 0 or 1 are not prime */
	if (n <= 1)
		return (0);

	/* Start recursive prime evaluation with i = n - 1 */
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Recursively evaluates if a number is prime.
 * @n: The number to evaluate.
 * @i: The iterator.
 *
 * Return: 1 if n is prime, 0 if not.
 */
int actual_prime(int n, int i)
{
	/* Base case: When i reaches 1, n is prime */
	if (i == 1)
		return (1);

	/* If n is divisible by i, it is not prime */
	if (n % i == 0 && i > 0)
		return (0);

	/* Continue recursion by decrementing i */
	return (actual_prime(n, i - 1));
}
