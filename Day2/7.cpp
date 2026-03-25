#include <stdio.h>

void jumlah(int *a, int *b);

int main() {
    int x, y;
    
    printf("Program untuk Menjumlahkan Dua Bilangan dengan menggunakan pointer\n\n");  
    printf("Masukkan angka pertama: ");
    scanf("%d", &x);
    printf("Masukkan angka kedua: ");
    scanf("%d", &y);

    jumlah(&x, &y);

    return 0;
}

void jumlah(int *a, int *b) {
    int hasil = *a + *b;
    printf("Hasil penjumlahan = %d\n", hasil);
}