#include <stdio.h>
#include <string.h>

typedef struct
{
    char tglLahir[15];
    char npm[10];
    char nama[50];
    char alamat[100];
    char hp[15];
} Mahasiswa;

int main()
{
    Mahasiswa dataMahasiswa[100];
    char tambahData = 'y';
    int jumlahMahasiswa = 0;

    while (tambahData == 'y' || tambahData == 'Y')
    {
        printf("Masukkan NPM: \n");
        scanf("%s", dataMahasiswa[jumlahMahasiswa].npm);

        printf("Masukkan Nama: \n");
        getchar();
        fgets(dataMahasiswa[jumlahMahasiswa].nama, sizeof(dataMahasiswa[jumlahMahasiswa].nama), stdin);
        dataMahasiswa[jumlahMahasiswa].nama[strcspn(dataMahasiswa[jumlahMahasiswa].nama, "\n")] = 0;

        printf("Masukkan tanggal lahir (DD-MM-YYYY): \n");
        scanf("%s", dataMahasiswa[jumlahMahasiswa].tglLahir);

        printf("Masukkan Alamat: \n");
        getchar();
        fgets(dataMahasiswa[jumlahMahasiswa].alamat, sizeof(dataMahasiswa[jumlahMahasiswa].alamat), stdin);
        dataMahasiswa[jumlahMahasiswa].alamat[strcspn(dataMahasiswa[jumlahMahasiswa].alamat, "\n")] = 0;

        printf("Masukkan Nomor HP: \n");
        scanf("%s", dataMahasiswa[jumlahMahasiswa].hp);
        jumlahMahasiswa++;

        printf("Ingin memasukkan data lagi? (y/n)");
        getchar();
        scanf("%c", &tambahData);
    }

    printf("\nData Mahasiswa:\n");
    printf("NPM        NAMA                    TGL LAHIR    ALAMAT           HP\n");
    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        printf("%-10s %-23s %-12s %-15s %-10s\n",
               dataMahasiswa[i].npm,
               dataMahasiswa[i].nama,
               dataMahasiswa[i].tglLahir,
               dataMahasiswa[i].alamat,
               dataMahasiswa[i].hp);
    }

    return 0;
}
