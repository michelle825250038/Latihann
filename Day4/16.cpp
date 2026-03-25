#include <stdio.h>

float kelilingLingkaran(float r);
float luasLingkaran(float r);

int main() {
    float r;

    printf("Program untuk Menghitung Keliling dan Luas Lingkaran\n\n"); 
    printf("Masukkan jari-jari: ");
    scanf("%f", &r);

    printf("Keliling lingkaran = %.2f\n", kelilingLingkaran(r));
    printf("Luas lingkaran = %.2f\n", luasLingkaran(r));

    return 0;
}

float kelilingLingkaran(float r) {
    return 2 * 3.14 * r;
}

float luasLingkaran(float r) {
    return 3.14 * r * r;
}