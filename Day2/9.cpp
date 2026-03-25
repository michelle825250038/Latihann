#include <stdio.h>

int main() {
    int angka[5];
    int terbesar;

    printf("Program untuk Mencari Nilai Terbesar dari Array\n\n"); 

    for (int i = 0; i < 5; i++) {
        printf("Masukkan angka ke-%d: ", i+1);
        scanf("%d", &angka[i]);
    }

    terbesar = angka[0];

    for (int i = 1; i < 5; i++) {
        if (angka[i] > terbesar) {
            terbesar = angka[i];
        }
    }

    printf("Nilai terbesar = %d\n", terbesar);

    return 0;
}