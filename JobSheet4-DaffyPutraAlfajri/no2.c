#include <stdio.h>
int main()
{
    char np[40];
    char nb[30];
    float hb;
    float jb;
    float ht;

    printf("Masukkan Nama Pembeli: ");
    scanf("%[^\n]s", np);

    printf("Masukkan Nama Barang: ");
    scanf("%s", nb);

    printf("Masukkan Harga Barang Satuan: ");
    scanf("%f", &hb);

    printf("Jumlah Barang yang Dibeli: ");
    scanf("%f", &jb);

    ht = hb * jb;
    printf("\n--- Struk Pembelian ---\n");
    printf("Nama Pembeli  : %s\n", np);
    printf("Nama Barang   : %s\n", nb);
    printf("Harga Satuan  : %.2f\n", hb);
    printf("Jumlah Barang : %.2f\n", jb);
    printf("Harga Total   : %.2f\n", ht);

    return 0;
}