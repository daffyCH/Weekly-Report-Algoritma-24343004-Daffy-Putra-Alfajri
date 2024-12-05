#include <stdio.h>

int main()
{
    int Lesley = 570082;
    int Layla, Balmond;

    Layla = Lesley;
    Balmond = Layla + 1;

    printf("Bagian A: \n");
    printf("Nilai Layla: %i\n", Layla);
    printf("Nilai Balmond: %i\n", Balmond);

    int *LaylaB = &Lesley;
    int BalmondB = *LaylaB + 1;

    printf("Bagian B: \n");
    printf("Nilai Layla: %i\n", *LaylaB);
    printf("Nilai Balmond: %i\n", BalmondB);

    return 0;
}