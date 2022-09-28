#include "main.h"
/**
* helper - This function helps calculate whether n is prime
* @n: The integer to test
* @i: The integer to help calculate whether n is prime
* Return: 1 if n is prime, otherwise 0
*/

int helper(int n, int i)
{
/* if n is greater than or equal to 25 */
if (n >= (i * i))
{
/* skip it's multiples and even numbers after 5 */
if (n % i == 0 || n % (i + 2) == 0)
return (0);
/* check primes after 11 */
i = i + 6;
}
return (1);
}
