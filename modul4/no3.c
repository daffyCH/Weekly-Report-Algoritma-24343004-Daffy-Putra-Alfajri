#include <stdio.h>
int main()
{
    float presensi = 85, praktek = 65, uts = 80, uas = 75;
    float bobotPresensi = 0.1, bobotPraktek = 0.2, bobotUts = 0.3, bobotUAS = 0.4;
    float nilaiAkhir = (presensi * bobotPresensi)+(praktek * bobotPraktek)+(uts * bobotUts)+(uas * bobotUAS);
    
    
    printf("Nilai Akhir : %.2f", nilaiAkhir);

    return 0;
}