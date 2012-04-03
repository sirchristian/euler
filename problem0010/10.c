#include<stdio.h>
#define TRUE 1
#define FALSE 0
int IsPrime(long x);
unsigned long long AddPrimes(int max);
int main()
{
 
    printf("\n\n%llu", AddPrimes(2000000));
    printf("\n");
    return 0;
}
 
unsigned long long AddPrimes(int max)
{
    unsigned long long sum = 0;
    int numPrimes = 0;
    unsigned long x = 2;
    int step = 1;
 

    for (x=2;x<max;x+=step)
    {
        // once we hit 3 we can start step 2
        if (x == 3)
            step = 2;
        if (IsPrime(x))
        {
            sum += x;
            numPrimes++;
            printf("%10lu ~ %15llu\r", x, sum);
            fflush(stdout);
        }
    }
    return sum;
}

int IsPrime(long x)
{
    long y;
    for (y=2;y<x;y++)
        if (x % y == 0)
            return FALSE;

    return TRUE;
}
