#include <stdio.h>

float π = 3.14;

float luasLingkaran(float r)
{
    return π * (r * r);
}

float kelilingLingkaran(float r)
{
    return 2 * π * r;
}

int main()
{
    float r;

    printf("Masukkan jari-jari (r): ");
    scanf("%f", &r);

    float hasilLuas = luasLingkaran(r);

    printf("Hasil perhitungan Luas Lingkaran π x %.f^2 = %.2f\n", r, hasilLuas);

    float hasilKeliling = kelilingLingkaran(r);

    printf("Hasil perhitungan Keliling Lingkaran 2 x π x %.f = %.2f\n", r, hasilKeliling);

    return 0;
}