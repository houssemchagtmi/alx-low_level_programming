#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
    long int num = 612852475143, maxFactor = -1, i;

    /* remove all factors of 2 first */
    while (num % 2 == 0)
    {
        maxFactor = 2;
        num /= 2;
    }

    /* now look for odd factors */
    for (i = 3; i <= sqrt(num); i += 2)
    {
        while (num % i == 0)
        {
            maxFactor = i;
            num /= i;
        }
    }

    /* num is now a prime number greater than 2 */
    if (num > 2)
        maxFactor = num;

    printf("%ld\n", maxFactor);

    return (0);
}

