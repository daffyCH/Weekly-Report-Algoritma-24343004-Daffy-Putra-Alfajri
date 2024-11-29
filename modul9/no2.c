#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char *start, *end, temp;

    printf("Masukkan kalimat: ");
    fgets(str, sizeof(str), stdin);

    start = str;                 // kalimat awal
    end = str + strlen(str) - 1; // kalimat terakhir

    while (start < end)
    {

        temp = *start;
        *start = *end; // kebalikan
        *end = temp;

        start++;
        end--;
    }

    printf("Kebalikannya: %s\n", str);

    return 0;
}
