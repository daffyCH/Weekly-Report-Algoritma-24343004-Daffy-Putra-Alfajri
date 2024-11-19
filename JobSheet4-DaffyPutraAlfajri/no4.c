#include <stdio.h>

int main() {
    int durasi;
    int tarifJamPertama = 15000;
    float tarifJamSelanjutnya = tarifJamPertama * 0.5; 
    float totalBiaya; 
    printf("Masukkan durasi yang diinginkan (dalam jam): ");
    scanf("%d", &durasi);

    if (durasi > 0) {
        totalBiaya = tarifJamPertama; 

        if (durasi > 1) {
            totalBiaya += (durasi - 1) * tarifJamSelanjutnya; 
        }

        
        printf("Total biaya untuk menonton film selama %d jam adalah: Rp %.2f\n", durasi, totalBiaya);
    } else {
        printf("Durasi tidak valid. Harus lebih dari 0 jam.\n");
    }

    return 0;
}
