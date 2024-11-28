#include <stdio.h>
int main()
{
    char name[20];
    printf("Hello, siapa nama lengkapmu?\n");
    scanf("%[^\n]", name);
    printf("Selamat Datang %S dalam Pemrograman C!", name);
    
    return 0; 
}