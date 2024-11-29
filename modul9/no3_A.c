#include <stdio.h>

int main(){
    int Lesley = 570082;
    int *Layla, Balmond;

    Layla = &Lesley;
    Balmond = Layla + 1;

    printf("Nilai Layla: %i\n", Layla);
    printf("Nilai Balmond: %i\n", Balmond);

    return 0;

}