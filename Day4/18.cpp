#include <stdio.h>

int main() {
    int angka[5] = {10, 20, 30, 40, 50};
    int *p;
    int i;

    p = angka;

    printf("Program untuk Menampilkan Isi Array dengan menggunakan pointer\n\n"); 
    for (i = 0; i < 5; i++) {
        printf("Nilai = %d\n", *(p + i));
    }

    return 0;
}