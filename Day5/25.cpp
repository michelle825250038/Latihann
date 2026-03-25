#include <stdio.h>

int main() {
    int angka[5];
    int terkecil;

    printf("Program untuk Mencari Nilai Terkecil dari Array\n\n"); 
    for(int i = 0; i < 5; i++) {
        printf("Masukkan angka ke-%d: ", i+1);
        scanf("%d", &angka[i]);
    }

    terkecil = angka[0];

    for(int i = 1; i < 5; i++) {
        if(angka[i] < terkecil) {
            terkecil = angka[i];
        }
    }

    printf("Nilai terkecil = %d\n", terkecil);

    return 0;
}