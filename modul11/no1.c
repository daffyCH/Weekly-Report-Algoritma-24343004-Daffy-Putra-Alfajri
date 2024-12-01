#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nama[100];
    char nim[10];
    char jurusan[20];
    char prodi[15];
} Mahasiswa;

int main()
{
    Mahasiswa mahasiswa;
    int i, jumlahMahasiswa;

    printf("Masukkan jumlah mahasiswa yang ingin diinput: ");
    scanf("%d", &jumlahMahasiswa);

    FILE *fptr;
    fptr = fopen("datamahasiswa.txt", "w");

    if (fptr == NULL)
    {
        printf("Gagal membuka file!");
        return 1;
    }

    for (int i = 0; i < jumlahMahasiswa; i++)
    {
        printf("\nMasukkan data mahasiswa ke-%d\n", i + 1);
        getchar();
        printf("Nama: ");
        fgets(mahasiswa.nama, sizeof(mahasiswa.nama), stdin);
        mahasiswa.nama[strcspn(mahasiswa.nama, "\n")] = 0;

        printf("NIM: ");
        fgets(mahasiswa.nim, sizeof(mahasiswa.nim), stdin);
        mahasiswa.nim[strcspn(mahasiswa.nim, "\n")] = 0;

        printf("Jurusan: ");
        fgets(mahasiswa.jurusan, sizeof(mahasiswa.jurusan), stdin);
        mahasiswa.jurusan[strcspn(mahasiswa.jurusan, "\n")] = 0;

        printf("Program Studi: ");
        fgets(mahasiswa.prodi, sizeof(mahasiswa.prodi), stdin);
        mahasiswa.prodi[strcspn(mahasiswa.prodi, "\n")] = 0;

        fprintf(fptr, "Nama: %s\n", mahasiswa.nama);
        fprintf(fptr, "NIM: %s\n", mahasiswa.nim);
        fprintf(fptr, "Jurusan: %s\n", mahasiswa.jurusan);
        fprintf(fptr, "Program Studi: %s\n", mahasiswa.prodi);
        fprintf(fptr, "------------------------------\n");
    }

    fclose(fptr);

    printf("\nData mahasiswa telah disimpan ke dalam file datamahasiswa.txt\n");

    return 0;
}