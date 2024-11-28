#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Masukkan Alas Segitiga : ");
    scanf("%i", &a);

    printf("Masukkan Tinggi Segitiga : ");
    scanf("%i", &b);

    c = a/2 * b;

    printf("Luas Segitiga = %i cm^2", c);

    return 0;
}