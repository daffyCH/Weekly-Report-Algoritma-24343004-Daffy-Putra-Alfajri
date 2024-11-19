#include <stdio.h>
int main()
{

    char nama[35];
    int nim;
    char programStudi[64];
    char fakultas[64];
    float nilaiPraktikum;
    float nilaiUTS;
    float nilaiUAS;
    float nilaiAkhir;

    printf("Nama : ");
    scanf("%[^\n]s", nama);

    printf("NIM : ");
    scanf("%d", &nim);

    printf("Program Studi : ");
    scanf("%s", programStudi);

    printf("Fakultas : ");
    scanf("%s", fakultas);

    printf("Nilai Praktikum : ");
    scanf("%f", &nilaiPraktikum);

    printf("NilaiUTS : ");
    scanf("%f", &nilaiUTS);

    printf("nilai UAS : ");
    scanf("%f", &nilaiUAS);

    nilaiAkhir = (0.3 * nilaiPraktikum) + (0.3 * nilaiUTS) + (0.4 * nilaiUAS);
    

    printf("~~~~~ Hasil Nilai Akhir Anda ~~~~~\n");
    printf("Nama                   = %s\n", nama);
    printf("NIM                    = %d\n", nim);
    printf("Prodi                  = %s\n", programStudi);
    printf("Fakuktas               = %s\n", fakultas);
    printf("Nilai Praktikum        = %.2f\n", nilaiPraktikum);
    printf("Nilai UTS              = %.2f\n", nilaiUTS);
    printf("Nilai UAS              = %.2f\n", nilaiUAS);
    printf("Nilai Akhir            = %.2f\n", nilaiAkhir);

    return 0;
}