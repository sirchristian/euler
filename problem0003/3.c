#include<stdio.h>
#define TRUE 1
#define FALSE 0
int IsPrime(int x);
int main()
{
    unsigned long long num = 600851475143;
    int x;
 
    for (x=2;num>1;x++)
	{
        if (IsPrime(x) && (num % x == 0))
        {
            num = num / x;
        }
	}
    printf("%d\n", x);
    return 0;
}
 
int IsPrime(int x)
{
    int y;
    for (y=3;y<x;y++)
        if (y % x == 0)
            return FALSE;

    return TRUE;
}
