#include <stdio.h>

int main() {
    int angka, jumlah = 0;

    printf("Program Menghitung Jumlah Digit\n\n");
    printf("Masukkan angka: ");
    scanf("%d", &angka);

    while (angka != 0) {
        jumlah += angka % 10;
        angka /= 10;
    }

    printf("Jumlah digit = %d\n", jumlah);

    return 0;
}