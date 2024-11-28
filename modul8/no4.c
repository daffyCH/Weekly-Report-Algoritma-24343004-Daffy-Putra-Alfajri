#include <stdio.h>

float diskon1(float a)
{
    return (20 * a) / 100;
}

float diskon2(float a)
{
    return (35 * a) / 100;
}

int main()
{
    float a;
    printf("Masukkan Total Pembelian: Rp. ");
    scanf("%f", &a);

    if (a < 1000000)
    {
        printf("Mohon maaf, anda tidak mendapatkan diskon nominal total pembelian tersebut.\n");
        printf("Total pembelian anda: Rp.%.2f\n", a);
        return 0;
    }
    if (a > 1000000 && a < 3000000)
    {
        float hasilDiskon1 = a + diskon1(a);
        printf("Diskon berhasil diterapkan sebesar 20%%!\n");
        printf("Total Pembelian menjadi: Rp.%.2f", hasilDiskon1);
    }
    if (a > 3000000)
    {
        float hasilDiskon2 = a + diskon2(a);
        printf("Diskon berhasil diterapkan sebesar 35%%!\n");
        printf("Total Pembelian menjadi: Rp.%.2f", hasilDiskon2);
    }

    return 0;
}