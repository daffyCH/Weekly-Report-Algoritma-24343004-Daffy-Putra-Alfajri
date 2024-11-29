#include <stdio.h>
void main()
{

    int nilai[20] = {90, 70, 65, 77, 45, 99, 95, 55, 80, 79, 66, 54, 77, 88, 97, 55, 66, 96, 72, 76};

    int length = sizeof(nilai) / sizeof(*nilai);
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += nilai[i];
    }

    float rata_rata = (float)sum / (float)length;
    printf("Rata-rata nilai ujian Mahasiswa: %.2f\n", rata_rata);
}
