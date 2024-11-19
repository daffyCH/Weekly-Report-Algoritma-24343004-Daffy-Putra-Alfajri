#include <stdio.h>
int main()
{
    int h, m, s, st;
    
    printf("Masukkan Detik: ");
    scanf("%d", &st);

    h = st / 3600;
    m = (st % 3600) / 60;
    s = st % 60;

    printf("Maka Dihasilkan: %d jam, %d menit, %d detik\n", h, m, s);

    return 0;

}