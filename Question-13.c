#include <stdio.h>

void square(int *num)
{
    *num = (*num) * (*num);
}

int main()
{
    int x = 24;
    printf("Before squaring: %d\n", x);
    square(&x);
    printf("After squaring: %d\n",x);
}
