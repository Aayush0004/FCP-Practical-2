#include <stdio.h>

int SumDiagonal(int matrix[3][3])
{
    int sum = 0;
    for(int i = 0; i < 3; i++)
    {
        sum += matrix[i][i];
    }
    return sum;
}
void main() 
{
    int matrix[3][3] = {{1,4,6},{2,5,9},{7,8,3}};
    int DiagonalSum = SumDiagonal(matrix);
    printf("Sum of diagonal elements: %d\n", DiagonalSum);
}
