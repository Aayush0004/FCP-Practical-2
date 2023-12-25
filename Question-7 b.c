#include <stdio.h>

void main()
{
    FILE *fp;
    char data[100];

    fp = fopen("Practical.txt", "r");

    fgets(data, sizeof(data), fp);
    fclose(fp);
    printf("Data from the file: %s\n", data);
}
