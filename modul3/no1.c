#include <stdio.h>
int main()
{
    float rupiah;
    float kurs = 14250;
    float dollar;

    printf("Masukkan Nilai Rupiah: ");
    scanf("%f", &rupiah);

    dollar = rupiah / kurs;

    printf("Jumlah Dolar yang diberikan kepada di penukar untuk Rp. %.2f adalah %.2f USD", rupiah, dollar);

    return 0;
}