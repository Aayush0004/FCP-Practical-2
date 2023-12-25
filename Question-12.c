#include <stdio.h>

int factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

void main()
{
    int num = 10;
    printf("Factorial of %d is: %d\n", num, factorial(num));
}
