#include <stdio.h>

int kali(int a, int b)
{
    return a * b;
}

int main()
{
    int a, b;

    printf("Masukkan bilangan pertama (a): ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua (b): ");
    scanf("%d", &b);

    int hasil = kali(a, b);

    printf("Hasil perkalian %d x %d = %d\n", a, b, hasil);

    return 0;
}
