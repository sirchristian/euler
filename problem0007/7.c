#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define NUMPRIMES 10001
int IsPrime(int x);
int main()
{
	long primes[NUMPRIMES];
    int numPrimes;
    int x;
    numPrimes = ComputePrimes(primes, NUMPRIMES);
 
    printf("Found %d primes. \n\n", numPrimes);
    for (x=0;x<numPrimes;x++)
    {
        char whitespace = (x+1) % 10 == 0 ? '\n' : '\t';           
        printf("%3d%c", primes[x],whitespace);
    }
    printf("\n");
    return 0;
}
 
// Computes primes and returns how many primes it calculated
int ComputePrimes(long primes[], int length)
{
    int numPrimes = 1;
    int x;
    long* arr = primes;
 
    // First prime
    *arr = 2;
    arr++;
    for (x=3;numPrimes<length;x+=2)
    {
        if (IsPrime(x))
        {
            *arr = x;
            arr++;
            numPrimes++;
        }
    }
    return numPrimes;
}

int IsPrime(long x)
{
    long y;
    for (y=2;y<x;y++)
        if (x % y == 0)
            return FALSE;

    return TRUE;
}
