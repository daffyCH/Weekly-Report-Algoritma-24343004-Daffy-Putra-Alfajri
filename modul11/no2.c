#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char buff[500];
    FILE *fptr;

    if ((fptr = fopen("datamahasiswa.txt", "r")) == NULL)
    {
        printf("File tidak ditemukan!");
        exit(1);
    }
    while (fgets(buff, sizeof(buff), fptr))
    {
        printf("%s", buff);
    }
    fclose(fptr);
}