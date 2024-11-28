#include <stdio.h>

int main()
{
    int menu;
    float saldo = 175000;
    float penarikan, setoran;

    printf("ATM\n");
    printf("No REK    : 0123\n");
    printf("Nama Akun : Hatori\n");
    printf("Saldo ATM : Rp.175.000\n\n");

    while (menu)
    {
        printf("Menu\n");
        printf("1. Cek Saldo\n");
        printf("2. Setoran\n");
        printf("3. Penarikan Tunai\n");
        printf("4. Exit\n");
        printf("Pilih salah satu menu(1-4): ");
        scanf("%i", &menu);

        switch (menu)
        {
        case 1:
            printf("\nSaldo saat ini: Rp.%.2f\n\n", saldo);
            break;
        case 2:
            printf("\nMasukkan jumlah setoran: Rp. ");
            scanf("%f", &setoran);
            saldo += setoran;
            printf("Saldo sudah disetorkan sebesar: Rp.%.2f\n", setoran);
            printf("Saldo saat ini: %.2f\n", saldo);
            break;
        case 3:
            printf("\nMasukkan jumlah saldo yang ingin ditarik: ");
            scanf("%f", &penarikan);

            if (saldo - penarikan < 50000)
            {
                printf("Penarikan tidak dapat dilakukan!\n");
                printf("Mohon sisihkan saldo anda di atm minimal Rp.50000!\n");
            }
            else
            {
                saldo -= penarikan;
                printf("Saldo sudah ditarik sebesar: Rp.%.2f\n", penarikan);
                printf("Saldo saat ini: %.2f\n", saldo);
            }
            break;

        case 4:
            printf("\nKeluar dari ATM\n");
            return 0;

        default:
            printf("Menu tidak ada!\n");
        }
    }

    return 0;
}
