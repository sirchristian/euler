#include "algorithms.h"

#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE 
#define FALSE 0
#endif
int IsPrime(long n)
{
    long r,f;
    // Translated from the pseduo-code for the sieve of Eratosthenes found
    // in the solution for problem 7.
    
    // 1 or under is never prime
    if (n <= 1)
        return FALSE;

    // 2 and 3 are always prime
    if (n == 2 || n == 3)
        return TRUE;

    // we got 2 taken care of..all other primes are odd
    if (n % 2 == 0)
        return FALSE;

    // We took care of all the negative cases below 9 already
    if (n < 9)
        return TRUE;

    // Takes care of common divisor (??) 
    if (n % 3 == 0)
        return FALSE;

    // Get an r such that r*r <= n
    r = floor(sqrt(n)); 
    f = 5;
    while (f <= r)
    {
        // If we find a factor, not a prime
        if (n % f == 0)
            return FALSE;
        if (n % (f+2) == 0)
            return FALSE;
        f += 6;
    }

    // failed all negative tests...must be prime
    return TRUE;
}
