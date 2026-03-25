#include <stdio.h>

int terbesar(int a, int b);

int main() {
    int x, y, hasil;

    printf("Program untuk Menentukan Nilai Terbesar\n\n");   
    printf("Masukkan angka pertama: ");
    scanf("%d", &x);
    printf("Masukkan angka kedua: ");
    scanf("%d", &y);

    hasil = terbesar(x, y);

    printf("Bilangan terbesar = %d\n", hasil);

    return 0;
}

int terbesar(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}