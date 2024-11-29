#include <stdio.h>
#include <string.h>

typedef struct {
    char tglLahir[15];
    char npm[10];
    char nama[50];
    char alamat[100];
    char hp[15];
} Mahasiswa;

int main() {
    Mahasiswa dataMahasiswa[100];
    char tambahData = 'y'; // Inisialisasi tambahData dengan 'y' untuk memulai loop
    int jumlahMahasiswa = 0;

    while (tambahData == 'y' || tambahData == 'Y') {
        // Input NPM
        printf("Masukkan NPM: \n");
        scanf("%s", dataMahasiswa[jumlahMahasiswa].npm);

        // Input Nama
        printf("Masukkan Nama: \n");
        getchar(); // Untuk menghapus karakter newline yang tertinggal dari scanf sebelumnya
        fgets(dataMahasiswa[jumlahMahasiswa].nama, sizeof(dataMahasiswa[jumlahMahasiswa].nama), stdin);
        dataMahasiswa[jumlahMahasiswa].nama[strcspn(dataMahasiswa[jumlahMahasiswa].nama, "\n")] = 0;

        // Input Tanggal Lahir
        printf("Masukkan tanggal lahir (DD-MM-YYYY): \n");
        scanf("%s", dataMahasiswa[jumlahMahasiswa].tglLahir);

        // Input Alamat
        printf("Masukkan Alamat: \n");
        getchar(); // Untuk menghapus karakter newline yang tertinggal dari scanf sebelumnya
        fgets(dataMahasiswa[jumlahMahasiswa].alamat, sizeof(dataMahasiswa[jumlahMahasiswa].alamat), stdin);
        dataMahasiswa[jumlahMahasiswa].alamat[strcspn(dataMahasiswa[jumlahMahasiswa].alamat, "\n")] = 0;

        // Input Nomor HP
        printf("Masukkan Nomor HP: \n");
        scanf("%s", dataMahasiswa[jumlahMahasiswa].hp);
        
        jumlahMahasiswa++;

        // Tanyakan apakah pengguna ingin menambah data lagi
        printf("Ingin memasukkan data lagi? (y/n): ");
        getchar(); // Untuk menghapus karakter newline yang tertinggal setelah scanf
        scanf("%c", &tambahData);
    }

    // Menampilkan data yang sudah dimasukkan
    printf("\nData Mahasiswa:\n");
    printf("NPM        NAMA                    TGL LAHIR    ALAMAT           HP\n");
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("%-10s %-23s %-12s %-15s %-10s\n",
               dataMahasiswa[i].npm,
               dataMahasiswa[i].nama,
               dataMahasiswa[i].tglLahir,
               dataMahasiswa[i].alamat,
               dataMahasiswa[i].hp);
    }

    return 0;
}
