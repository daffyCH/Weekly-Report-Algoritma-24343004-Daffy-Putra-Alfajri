#include <stdio.h>
int main()
{
    int panjang, lebar, luas;

    printf("Masukkan Panjang Persegi Panjang: ");
    scanf("%i", &panjang);

    printf("Masukkan Lebar Persegi Panjang: ");
    scanf("%i", &lebar);

    luas = panjang * lebar;

    printf("Luas Persegi Panjang = %i cm", luas);

    return 0;
}