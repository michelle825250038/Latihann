#include <stdio.h>

int pangkat(int a, int b);

int main() {
    int angka, pangkat_ke;

    printf("Program untuk Menghitung Hasil Pangkat\n\n"); 
    printf("Masukkan angka: ");
    scanf("%d", &angka);
    printf("Masukkan pangkat: ");
    scanf("%d", &pangkat_ke);

    printf("Hasil = %d\n", pangkat(angka, pangkat_ke));

    return 0;
}

int pangkat(int a, int b) {
    int hasil = 1;
    for (int i = 1; i <= b; i++) {
        hasil = hasil * a;
    }
    return hasil;
}