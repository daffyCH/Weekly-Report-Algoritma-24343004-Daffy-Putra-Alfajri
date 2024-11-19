#include <stdio.h>
int main()
{
    float d, v, l, π, r;

    printf("Masukkan Diameter Bola Basket: ");
    scanf("%f", &d);
    
    r = d / 2;
    π = 3.14;
    v = (4 / 3) * π * r * r * r;
    l = 4 * π * r * r;
 
    printf("Hasil Volume = %.2f\n", v);
    printf("Hasil Luas = %.2f\n", l);

    return 0;

}