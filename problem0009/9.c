#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    int c1,c2;

    for (a=1;a<1000;a++)
    {
        for (b=1;b<1000;b++)
        {
            c1 = sqrt((a*a) + (b*b));
            c2 = 1000 - (a + b);
            if (c1 == c2 && (c1*c1) == a*a + b*b)
                goto end;
        }
    }
end:
    printf("a = %d;b = %d;c = %d\n", a, b, c1);
    printf("abc = %d\n\n", a*b*c1);
    return 0;
}
