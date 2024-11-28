#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++) //baris
    {
        for (j = 1; j <= i; j++)//bintang
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}