#include <stdio.h>

int kali(int a, int b)
{
    return a * b;
}

int tambah(int a, int b)
{
    return a + b;
}

int kurang(int a, int b)
{
    return a - b;
}

int bagi(int a, int b)
{
    if (b == 0)
    {
        printf("tidak dapat dibagi dengan penyebut 0!\n");
    }
    return a / b;
}

int main()
{
    int a, b;

    printf("Masukkan bilangan pertama (a): ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua (b): ");
    scanf("%d", &b);

    int hasilKali = kali(a, b);

    printf("Hasil perkalian   %d x %d = %d\n", a, b, hasilKali);

    int hasilTambah = tambah(a, b);

    printf("Hasil penjumlahan %d + %d = %d\n", a, b, hasilTambah);

    int hasilKurang = kurang(a, b);

    printf("Hasil pengurangan %d - %d = %d\n", a, b, hasilKurang);

    int hasilBagi = bagi(a, b);

    printf("Hasil pembagian   %d / %d = %d\n", a, b, hasilBagi);

    return 0;
}