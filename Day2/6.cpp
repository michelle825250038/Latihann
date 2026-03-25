#include <stdio.h>

int main() {
    int x, y;

    printf("Program untuk Menjumlahkan Dua Bilangan\n\n");  
    printf("Masukkan angka pertama: ");
    scanf("%d", &x);
    printf("Masukkan angka kedua: ");
    scanf("%d", &y);

    printf("Hasil penjumlahan = %d\n", x + y);

    return 0;
}