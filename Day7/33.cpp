#include <stdio.h>

int main() {
    int angka, jumlah = 0;

    printf("Program Menghitung Banyak Digit\n\n");
    printf("Masukkan angka: ");
    scanf("%d", &angka);

    while (angka != 0) {
        angka /= 10;
        jumlah++;
    }

    printf("Jumlah digit = %d\n", jumlah);

    return 0;
}