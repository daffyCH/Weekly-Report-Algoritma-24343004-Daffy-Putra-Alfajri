#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main()
{
    char mainLagi;

    do
    {
        int comNumber, tebakan, percobaan = 0;

        srand(time(0));

        comNumber = rand() % 20 + 1;

        printf("Saya sudah memilih angka, coba tebak! \n");

        while (1)
        {
            printf("Masukkan angka tebakan: \n");
            scanf("%i", &tebakan);
            percobaan++;

            if (tebakan < comNumber)
            {
                printf("Nomor saya lebih besar!\n");
            }
            else if (tebakan > comNumber)
            {
                printf("Nomor saya lebih kecil! \n");
            }
            else
            {
                printf("Selamat, anda menebak angka dengan benar!\n");
                printf("Jumlah percobaan: %i\n", percobaan);
                break;
            }
        }

        printf("Permainan selesai, apakah anda ingin mencoba lagi?(y/n) \n");
        scanf(" %c", &mainLagi);
        

    } while (mainLagi == 'y' || mainLagi == 'Y');

    printf("Terimakasih sudah bermain!\n");
}