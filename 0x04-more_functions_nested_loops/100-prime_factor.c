#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
    long int n = 612852475143;
    long int largest_factor = 2;

    while (n > largest_factor)
    {
        if (n % largest_factor == 0)
        {
            n /= largest_factor;
        }
        else
        {
            largest_factor++;
        }
    }

    printf("%ld\n", largest_factor);

    return (0);
}
