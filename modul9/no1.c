#include <stdio.h>

int main()
{
    char *a[] = {"D", "N D", "A N D", "L A N D", "R L A N D", "O R L A N D", "B O R L A N D"};

    for (int i = 0; i < 7; i++)
    {
        printf("%s\n", a[i]);
    }
    return 0;
}