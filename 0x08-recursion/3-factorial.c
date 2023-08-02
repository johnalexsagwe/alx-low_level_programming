/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	/* Base case: factorial of 0 is 1 */
	if (n == 0)
		return (1);

	/* Recursive case: return n * factorial(n-1) */
	return (n * factorial(n - 1));
}
