#include <stdio.h>

int main() {
    float harga, diskon, bayar;

    printf("Program Menghitung Diskon Belanja\n\n");
    printf("Masukkan total belanja: ");
    scanf("%f", &harga);

    if (harga > 100000) {
        diskon = 0.1 * harga;
    } else {
        diskon = 0;
    }

    bayar = harga - diskon;

    printf("Total bayar = %.2f\n", bayar);

    return 0;
}