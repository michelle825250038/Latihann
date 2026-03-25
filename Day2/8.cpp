#include <stdio.h>

int main() {
    int angka[5];
    int jumlah = 0;

    printf("Program untuk Menghitung Jumlah Array\n\n"); 

    for (int i = 0; i < 5; i++) {
        printf("Masukkan angka ke-%d: ", i+1);
        scanf("%d", &angka[i]);
        jumlah = jumlah + angka[i];
    }

    printf("Jumlah semua angka = %d\n", jumlah);

    return 0;
}