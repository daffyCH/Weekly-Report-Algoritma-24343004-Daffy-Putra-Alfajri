#include <stdio.h>
#include <string.h>

int main()
{

    char correct_user[] = "fufufafa";
    char correct_password[] = "ganyang123";

    char user[100];
    char password[100];

    printf("Masukkan Username: \n");
    scanf("%s", user);
    printf("Masukkan Password: \n");
    scanf("%s", password);

    if (strcmp(correct_user, user) == 0 && strcmp(correct_password, password) == 0)
    {
        printf("Login Berhasil!\n");
    }
    else
    {
        printf("Login Gagal!\n");
    }

    return 0;
}