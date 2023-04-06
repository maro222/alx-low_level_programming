/**
 * is_prime_number - prime function
 * @n: input
 * @i: input
 * Return: int
 */

int prime(int n, int i);
int is_prime_number(int n)
{
	prime(n, 1);
}

/**
 * prime - auxilary function
 * @n: input
 * @i: input
 * Return: int
 */
int prime(int n, int i)
{
	if (n % i == 0)
		return (0);
	else
		return (prime(n, i + 1));
}
