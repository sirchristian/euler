#include<stdio.h>
#define TRUE 1
#define FALSE 0
long AddSquares(int limit);
long SquareSum(int limit);
int main()
{
    int limit = 100;
    long sumOfSquares;
    long squareOfSum;
    sumOfSquares = AddSquares(limit);
    squareOfSum = SquareSum(limit);
    printf("Sum Of Squares: %ld\n", sumOfSquares);
    printf("Square Of Sum: %ld\n", squareOfSum);
    printf("Difference: %ld\n", squareOfSum-sumOfSquares);

    return 0;
}

long AddSquares(int limit)
{
    int x;
    long sum = 0;
    for (x=1;x<=limit;x++)
        sum += (x*x);

    return sum;
}

long SquareSum(int limit)
{

    int x;
    long sum = 0;
    for (x=1;x<=limit;x++)
        sum += x;

    return sum*sum;
}
