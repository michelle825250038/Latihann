#include <stdio.h>

int tambah(int a, int b) {
    return a + b;
}
int kurang(int a, int b) {
    return a - b;
}
int kali(int a, int b) {
    return a * b;
}
float bagi(int a, int b) {
    return (float)a / b;
}

int main() {
    int a, b, pilihan;

    printf("Program Kalkulator Sederhana\n\n");

    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("Pilih operasi: ");
    scanf("%d", &pilihan);

    printf("Masukkan angka pertama: ");
    scanf("%d", &a);
    printf("Masukkan angka kedua: ");
    scanf("%d", &b);

    if (pilihan == 1) {
        printf("Hasil = %d\n", tambah(a,b));
    } else if (pilihan == 2) {
        printf("Hasil = %d\n", kurang(a,b));
    } else if (pilihan == 3) {
        printf("Hasil = %d\n", kali(a,b));
    } else if (pilihan == 4) {
        printf("Hasil = %.2f\n", bagi(a,b));
    } else {
        printf("Pilihan tidak valid\n");
    }
    return 0;
}