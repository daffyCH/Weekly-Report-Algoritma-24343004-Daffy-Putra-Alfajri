#include <stdio.h>
int main()
{
    float c, k, f, r;

    printf("Masukkan Input Suhu: ");
    scanf("%f", &c);

    k = c + 273.15;
    f = c * 1.8 + 32;
    r = c * 0.8;

    printf("To Kelvin     = %.2f\n", k);
    printf("To Fahrenheit = %.2f\n", f);
    printf("To Reamur     = %.2f\n", r);

    return 0;
}